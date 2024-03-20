#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;
  
  printf("Digite o nome do produto:\n");
  int deu_certo = scanf("%[^\n]s", nome);
  
  printf("Digite a quantidade:\n");
  deu_certo = scanf("%i", &quantidade);

  printf("Digite o valor:\n");
  deu_certo = scanf("%f", &valor);

  printf("\x1b[35m-------------------------\n");
  printf("   N O T A   L E G A L   \n");
  printf("-------------------------\x1b[0m\n");
  printf("\x1b[32mItem          Qtd Valor     \x1b[0m\n");
  printf("\x1b[36m%-13s %03i %4.2f\n\x1b[0m", nome , quantidade, valor);
  
  return 0;
}

