/*1. Faça um prorama em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10. */
#include <stdio.h>

int main() {
  float A1 = 0;
  float A2 = 0;

  printf("insira a sua nota de A1: ");
  scanf("%f" , &A1);
  
  printf("insira a sua nota de A2: ");
  scanf("%f" , &A2);
  
  float media = (A1*0.4) + (A2*0.6);
  
  printf("a sua media é: %f\n", media);
  return 0;
  
}