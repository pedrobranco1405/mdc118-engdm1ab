/* 9. Faça um programa em C que leia números inteiros até ler zero, e imprima o maior e o menor entre eles. */
#include <stdio.h>

int main () {
  int numero = 1;
  int maior = 0;
  int menor = 0;
  while (numero != 0) {
    printf("Digite um número, zero para terminar:\n");
    int ok = scanf("%i", &numero);

    if (ok) {
      if (numero > maior) {
        maior = numero;
      }
      if (numero < menor) {
        menor = numero;
      }
    } else {
      getchar();
      printf("Número inválido, tente novamente.");
    }
  }
  printf("O maior numero foi %i e o menor foi %i", maior, menor);
  return 0;
}