/*4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).*/
#include <stdio.h>
int main() {
  float largura;
  float comprimento;
  
  printf("insira a largura do terreno: ");
  float deu_certo = scanf("%f" , &largura);
  
  printf("insira o comprimento do terreno: ");
  deu_certo = scanf("%f" , &comprimento);
  
  float area_metros = largura * comprimento;
  float area_hectares = area_metros / 10000;
  
  printf("a area do terreno em hectares é: %f\n", area_hectares);
  
  return 0;
}
