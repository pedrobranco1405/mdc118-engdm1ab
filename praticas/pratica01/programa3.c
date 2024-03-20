/* 3. Faça um programa em C que calcule o perimetro de uma pizza, a partir da fórmula P = 2 x pi x raio. */
#include <stdio.h>
int main() {
  float pi = 3.14;
  float raio;

  printf ( "Digite o raio da pizza: " );
  int deu_certo = scanf( "%f" , &raio );

  float perimetro_da_pizza = 2*pi*raio;
  printf("o perimetro da pizza é: %f\n", perimetro_da_pizza);
  return 0;
}