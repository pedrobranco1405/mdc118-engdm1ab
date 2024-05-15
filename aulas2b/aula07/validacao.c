#include <stdio.h>

int main (){
  int numero;
  int valido = 0;
  
  /* while (valido == 0) {
    printf ("Insira um numero entre 1 e 10:\n");
    int ok = scanf("%i", &numero);
    valido = numero >= 1 && numero <= 10;

    if (ok && valido) {
      printf("Segue o jogo!\n");
    } else {
      getchar();
      printf("Número invalido, insira um número inteiro");
    }
  } */

   do {
    printf ("Insira um numero entre 1 e 10:\n");
      int ok = scanf("%i", &numero);
      valido = numero >= 1 && numero <= 10;

      if (ok && valido) {
        printf("Segue o jogo!\n");
      } else {
        getchar();
        printf("Número invalido, insira um número inteiro");
      }
  } while (valido == 0); 
  
  return 0;
}