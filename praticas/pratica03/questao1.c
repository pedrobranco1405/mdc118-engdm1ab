/*1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.*/
#include <stdio.h>

int main() {
  int numero;
  printf("Insira um número inteiro: \n");
  int ok = scanf("%i" , &numero);
  if (ok){
    if (numero % 2 == 0) {
      printf("O número %i é par\n", numero);
    }
    else {
      printf("O número %i é ímpar\n", numero);
    }
  }
  else {
    printf("O valor inserido não é um número inteiro\n");
  }
  
  return 0;
}