/*7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%*/

#include <stdio.h>

int main() {
  float valor_da_hora_de_trabalho;
  float total_de_horas_trabalhadas_no_mes;
  
  printf("insira o valor da hora de trabalho: ");
  int ok = scanf("%f" , &valor_da_hora_de_trabalho);
  printf("insira o total de horas trabalhadas no mes: ");
  ok = scanf("%f" , &total_de_horas_trabalhadas_no_mes);

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas_no_mes;
  float valor_imposto_renda = valor_salario_bruto * IR;
  float valor_imposto_previdencia = valor_salario_bruto * INSS;
  float valor_salario_liquido = valor_salario_bruto - valor_imposto_renda - valor_imposto_previdencia;

  printf("\x1b[34m--------------------------------\n");
  printf("    C O N T R A C H E Q U E     \n");
  printf("--------------------------------\x1b[0m\n");
  printf("Salario Bruto...:R$ \x1b[32m%11.2f\n\x1b[0m", valor_salario_bruto);
  printf("Imposto Renda...:R$ \x1b[31m%11.2f\x1b[0m\n", valor_imposto_renda);
  printf("Imposto Previ...:R$ \x1b[31m%11.2f\x1b[0m\n", valor_imposto_previdencia);
  printf("Salario Liquido.:R$ \x1b[32m%11.2f\n\x1b[0m", valor_salario_liquido);

  return 0;
} 