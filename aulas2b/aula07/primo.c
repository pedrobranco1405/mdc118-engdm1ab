#include <stdio.h>

int main(){
  int numero;

  printf("Entre com um número inteiro:\n");
    int ok = scanf("%i", &numero);

  if (ok) {
    int qtde_divisores = 0;
    for (int i = 1; i <= numero; i++) {
      if (numero % i == 0){
        qtde_divisores++;
      }
    }
    if (qtde_divisores == 2) {
      printf ("O número %i é primo\n", numero);
    } else {
      printf("O numero %i não é primo\n", numero);
    }
      
  } else {
    printf("Número inválido! Insira um número inteiro.\n");
  }
  return 0;
}