/*Faça um programa que lê três números reais do teclado e apresenta na tela a média destes números.*/
#include <stdio.h>

int main() {

  float numero1;
  float numero2;
  float numero3;
    printf("Insira o primeiro numero:\n ");
    int ok = scanf("%f", &numero1);
    printf("Insira o segundo numero:\n ");
    ok = scanf("%f", &numero2);
    printf("Insira o terceiro numero:\n ");
    ok = scanf("%f", &numero3);
  
    float media = (numero1 + numero2 + numero3) / 3;
  
    printf("A media é: %f\n", media);
  
  return 0;
}