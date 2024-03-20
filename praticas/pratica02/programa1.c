/*1. Faça um programa em C que leia três números reais e imprima a média aritmética destes números.*/
#include <stdio.h>

int main() {
  float numero1;
  float numero2;
  float numero3;
  printf("insira o primeiro numero: ");
  deu_certo = scanf("%f" , &numero1);
  printf("insira o segundo numero: ");
  deu_certo = scanf("%f" , &numero2);
  printf("insira o terceiro numero: ");
  deu_certo = scanf("%f" , &numero3);

  float media = (numero1 + numero2 + numero3)/3;
  printf("a media é: %f\n", media);

  return 0;
}
