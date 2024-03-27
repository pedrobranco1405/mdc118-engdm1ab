/* 4. Faça um programa em C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PISPASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%. */
#include <stdio.h>
int main() {
  float preco_inicial = 0.0;
  const float icms = 0.17;
  const float cofins = 0.076;
  const float pis_pasep = 0.0165;

  printf("Insira o preço inicial do seu produto: ");
  scanf("%f" , &preco_inicial);
  
  float preco_final = (1+ icms + cofins + pis_pasep) * preco_inicial;
  float valor_icms = preco_inicial*icms;
  float valor_cofins = preco_inicial*cofins;
  float valor_pis_pasep = preco_inicial*pis_pasep;
  
  
  printf("O preço inicial do produto é: %f\n", preco_inicial);
  printf("O valor do icms é: %f\n", valor_icms);
  printf("O valor do cofins é: %f\n", valor_cofins);
  printf("O valor do pis_pasep é: %f\n", valor_pis_pasep);
  printf("O preço final do produto é: %f\n", preco_final);
  return 0;
} 