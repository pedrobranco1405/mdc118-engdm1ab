/* 8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos). */
#include <stdio.h>

int main() {
  int segundos, horas, minutos;
  printf("Digite o tempo em segundos: ");
  int ok = scanf("%d", &segundos);
  
  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = segundos % 60;
  
  printf("O tempo é: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
  
  return 0;
}