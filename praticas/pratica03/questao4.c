/*4. Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.*/
#include <stdio.h>

int main() {
  char tecla;
  printf("Insira uma tecla: ");
  int ok = scanf("%c", &tecla);
  if(tecla >= 'a' && tecla <= 'z' || tecla >= 'A' && tecla <= 'Z') {
    printf("A tecla pressionada é uma letra\n");
  }
  else {
    if(tecla >= '0' && tecla <= '9') { 
      printf("A tecla pressionada é um digito\n");
    }
    else {
      printf("A tecla pressionada é um caractere especial\n");
    }
  }
  
  return 0;
}
