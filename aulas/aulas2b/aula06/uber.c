#include <stdio.h>

int main() {

  int nota = 0;

  printf("Avalie sua viagem, insira um número de 1 a 5:\n");
  int ok = scanf("%i", &nota);

  // if (nota == 1) {
  //   printf("Avaliação enviada:*\n")
  // }    
  // else if (nota == 2) {
  //   printf ("Avaliação enviada:**\n")
  // }    
  // else if (nota == 3) {
  //   printf ("Avaliação enviada:***\n")    
  // }
  // else if (nota == 4) {
  //   printf ("Avaliação enviada:****\n")
  // } 
  // else if (nota == 3) {
  //   printf ("Avaliação enviada:*****\n")
  // }
  // else {
  //   printf ("Avaliação inválida, insira um número inteiro entre 1 e 5")
  // }

  switch(nota) {
    case 1: printf("Avaliação enviada:*\n"); break;
    case 2: printf("Avaliação enviada:**\n"); break;
    case 3: printf("Avaliação enviada:***\n"); break;
    case 4: printf("Avaliação enviada:****\n"); break;
    case 5: printf("Avaliação enviada:*****\n"); break;
    default: printf ("Avaliação inválida, insira um número inteiro entre 1 e 5\n");
  }
  return 0;
}
  