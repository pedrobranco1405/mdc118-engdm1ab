#include <stdio.h>

int main(){
  int numero;

  printf("Entre com um numero de 1 a 10: ");
  int ok = scanf("%i", &numero);

  if (ok && numero > 0 && numero < 11) {
    printf("A tabuada de %i\n", numero);
    for(int i=1; i<=10; i++) {
      printf("%i x %i = %i\n", i, numero, i * numero);
    }
  } 
  
  else {
  printf("Numero invalido. Tente novamente.\n");
  }

  return 0;
}
