/*6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra)*/
#include <stdio.h>
int main() {
  float valor_de_compra;
  int ano_de_fabricacao;
  int ano_de_depreciacao;
  
  printf("insira o valor de compra: ");
  float ok = scanf("%f" , &valor_de_compra);
  
  printf("insira o ano de fabricação: ");
  ok = scanf("%d" , &ano_de_fabricacao);

  printf("insira o ano de depreciação: ");
  ok = scanf("%d" , &ano_de_depreciacao);
  
  float depreciacao = (ano_de_depreciacao - ano_de_fabricacao)*0.01*valor_de_compra;

  printf("o valor depreciado é: %f\n", depreciacao);
  return 0;
}