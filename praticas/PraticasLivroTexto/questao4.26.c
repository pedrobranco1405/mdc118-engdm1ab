/*Faça um programa para ler dois números inteiros, x e y, e imprimir o quociente e o resto da divisão inteira entre eles. Utilize variáveis inteiras.*/
#include <stdio.h>

int main() {

  int x;
  int y;

  printf("Insira o primeiro número inteiro:\n ");
  int ok = scanf("%d", &x);
  printf("Insira o segundo número inteiro:\n ");
  ok = scanf("%d", &y);

  int quociente = x / y;
  int resto = x % y;
  printf("O quociente da divisão é: %d\n", quociente);
  printf("O resto da divisão é: %d\n", resto);
  
  return 0;
}