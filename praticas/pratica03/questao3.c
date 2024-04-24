/* 3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos. */
#include <stdio.h>

int main(){
  int nota;
  printf("insira a nota:\n");
  int deu_certo = scanf("%i" , &nota);
  if (deu_certo && nota > 0 && nota <= 5){
    if (nota == 1) {
      printf("Performance ruim\n");
    }  
    if (nota == 2) {
      printf("Performance insuficiente\n");
    }
    if (nota == 3) {
      printf("Performance suficiente\n");
    } 
    if (nota == 4){
      printf("Performance boa\n");
    }
    if (nota == 5){
      printf("Performance ótima\n");
    }
  }
  else {
    printf("Nota inválida, insira um valor inteiro, entre 1 e 5\n");
  }
  return 0;
}