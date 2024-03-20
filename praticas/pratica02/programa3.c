/*3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).*/
#include <stdio.h>

int main(){
  float celsius;
  printf("insira a temperatura em celsius: ");
  
  float deu_certo = scanf("%f" , &celsius);
  
  float fahrenheit = (celsius * 9/5) + 32;
  
  printf("a temperatura em fahrenheit é: %f\n", fahrenheit);
  
  return 0;
}
