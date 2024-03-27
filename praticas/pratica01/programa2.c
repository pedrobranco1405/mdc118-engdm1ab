/* 2. Faça um programa em C que calcule a área de um triângulo a partir da formuma área = base x altura / 2. Considere base e altura números inteiros maiores que 0. */
#include <stdio.h>

int main() {
  int base = 0;
  int altura = 0;

  printf("insira a medida da base do triangulo: ");
  scanf("%i" , &base);

  printf("insira a medida da altura do triangulo: ");
  scanf("%i" , &altura);

  int area = (base*altura)/2;
  printf("a area do triangulo é: %i\n", area);
  return 0;
}

