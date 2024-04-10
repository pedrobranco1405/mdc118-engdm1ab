/*Escreva abaixo o código de um programa que calcule a média de quilômetros feitos com cada litro de combustível. Solicite a entrada de dados com quilômetros e litros e depois exiba o cálculo.*/
#include <stdio.h>
int main() {

  float km;
  float litros;
  
  printf("Insira a quantidade de quilômetros percorridos:\n");
  int ok = scanf("%f", &km);
  printf("Insira a quantidade de litros de combustível consumidos:\n");
  ok = scanf("%f", &litros);
  
  float media = km / litros;

  printf("A média de quilômetros por litro é: %f\n", media);
  return 0;
}