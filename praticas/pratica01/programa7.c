/* 7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°. */
#include <stdio.h>
int main() {
  float sin45 = 0.707;
  float distancia = 0.0;

  printf("insira a distancia percorrida pelo avião: ");
  scanf("%f" , &distancia);
  float altura = sin45 * distancia;
  printf("a altura do avião é: %f\n", altura);
  return 0;
} // shell ./aviao