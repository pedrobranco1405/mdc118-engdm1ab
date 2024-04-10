/*10. Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.*/
#include <stdio.h>

int main() {
  int numero;
  
  printf("insira um numero inteiro: ");
  int ok = scanf("%d" , &numero);
  
  printf("A tabuada de multiplicacao do numero %d é:\n",   numero);
  
    printf("%d x 1 = %d\n", numero, numero * 1);
    printf("%d x 2 = %d\n", numero, numero * 2);
    printf("%d x 3 = %d\n", numero, numero * 3);
    printf("%d x 4 = %d\n", numero, numero * 4);
    printf("%d x 5 = %d\n", numero, numero * 5);
    printf("%d x 6 = %d\n", numero, numero * 6);
    printf("%d x 7 = %d\n", numero, numero * 7);
    printf("%d x 8 = %d\n", numero, numero * 8);
    printf("%d x 9 = %d\n", numero, numero * 9);
    printf("%d x 10 = %d\n", numero, numero * 10);
  
    return 0;
  }