/*2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.*/

#include <stdio.h>

int main (){
  float valor_bruto;
  printf("Insira o valor bruto do produto:\n ");
  int ok = scanf("%f" , &valor_bruto);
  if (valor_bruto <= 100.00){
    float valor_com_desconto = valor_bruto - (valor_bruto * 0.01);
    printf("O valor com desconto de 1% é: %f\n", valor_com_desconto);
  }
  if (valor_bruto > 100.00 && valor_bruto <= 500.00) {
    float valor_com_desconto = valor_bruto - (valor_bruto * 0.05);
    printf("O valor com desconto de 5% é: %f\n", valor_com_desconto);
  
  }
  if (valor_bruto > 500.00) {
    float valor_com_desconto = valor_bruto - (valor_bruto * 0.1);
    printf("O valor com desconto de 10% é: %f\n", valor_com_desconto);
  }
  if (valor_bruto < 0) {
    printf("O valor inserido é inválido, insira um número maior que 0\n");
  }
  return 0;
}