/* 2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles. */
#include <stdio.h>
int main() {
  
  int numero1;
  int numero2;
  
  printf("insira o primeiro numero: ");
  int deu_certo = scanf("%d" , &numero1);
  
  printf("insira o segundo numero: ");
  deu_certo = scanf("%d" , &numero2);
  
  int quociente = numero1/numero2;
  int resto = numero1%numero2;
  
  printf("o quociente é: %d\n", quociente);
  printf("o resto é: %d\n", resto);
  return 0;
}