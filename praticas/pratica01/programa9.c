/* 9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias. */
#include <stdio.h>

int main() {
  int anos, meses, dias;
  printf("Digite a idade em anos, meses e dias:\n ");
  printf("Anos:\n");
  scanf("%d", &anos);
  printf("Meses:\n");
  scanf("%d", &meses);
  printf("Dias:\n");
  scanf("%d", &dias);

  int totalDias = anos * 365 + meses * 30 + dias;
  printf("A idade em dias é: %d\n", totalDias);
  return 0;
}