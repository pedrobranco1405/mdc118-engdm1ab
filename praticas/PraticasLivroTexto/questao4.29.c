/* Escreva um programa para ler uma temperatura em graus Celsius, calcular e
escrever o valor correspondente em graus Fahrenheit.
°F = °C × 1,8 + 32 */
#include <stdio.h>

int main() {
  float celsius = 0.0;
  printf("Insira a temperatura em graus Celsius:\n");
  float ok = scanf( "%f" , &celsius );
  float fahrenheit = celsius * 1.8 + 32;
  printf("A temperatura em graus Fahrenheit é:\n %f", fahrenheit);
  return 0;
}