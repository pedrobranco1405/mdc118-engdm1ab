/*
8. Faça um programa em C que calcule o fatorial de um número inteiro. n! = n x n-1 x n-2 x ... 2 x 1
*/
#include <stdio.h>

int main() {
  int numero;
  long int fatorial = 1;

  printf("Calculo do Fatorial (n!)\n\n");
  printf("Insira um numero inteiro > ou = 0: ");
  int ok = scanf("%i", &numero);
  int valido = numero >= 0;

  if (ok && valido) {
    printf("%i! = ", numero);
    for(int i = numero; i > 1; i--) {
      fatorial = fatorial * i;
      printf("%i x ", i);
    }
    printf("1 = %li\n", fatorial);
  } else {
    printf("Numero invalido!\n");
  }

  return 0;
}