#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char verbo[21];
  char pronomes[6][5] = {"EU", "TU", "ELE", "NOS", "VOS", "ELES"};
  char sufixos[6][5] = {"O","AS", "A", "AMOS", "AIS", "AM"};
  
  printf("Entre com um verbo terminado em AR: ");
  int ok = scanf("%s", verbo);
  
  int tamanho_verbo = strlen(verbo);
  int ultima_letra = tamanho_verbo - 1;
  int penultima_letra = tamanho_verbo - 2;
  
  for(int i = 0; i < tamanho_verbo; i++) {
    verbo[i] = toupper(verbo[i]);
  }
  if (ok && verbo[ultima_letra] == 'R' && verbo[penultima_letra] == 'A') {
    printf("Conjugação do verbo %s no presente do indicativo\n", verbo);
    char radical[21];
    strcpy(radical, verbo);
    radical[penultima_letra] = '\0';
    for(int i = 0; i < 6; i++){
      printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);
    }
  } else {
    printf("O verbo inserido não termina em AR.\n");
  }
  
  return 0;
}