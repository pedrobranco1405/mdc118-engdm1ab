#include <stdio.h>

int main(){
  float nota1;
  float nota2;
  
  printf("Insira a primeira nota:");
  int ok = scanf("%f", &nota1);

  if (nota1 >= 0.0f && nota1 <= 10.0f) {
    printf("Insira a segunda nota:");
    ok = scanf("%f", &nota2);
    if (nota2 >= 0.0f && nota2 <= 10.0f){
      float media = (nota1*0.4 + nota2*0.6);
      printf("A média é: %f\n", media);
    }
    else {
      printf("Nota 2 inválida! Informe um valor entre 0.0 e 10.0\n");
    }
  }
  else {
    printf("Nota 1 inválida! Informe um valor entre 0.0 e 10.0\n");
  }

  return 0;
}