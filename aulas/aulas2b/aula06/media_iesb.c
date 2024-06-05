#include <stdio.h>

int main(){
  float nota1;
  float nota2;
  
  printf("Insira a primeira nota:\n");
  int ok = scanf("%f", &nota1);

  if (nota1 >= 0.0f && nota1 <= 10.0f) {
    printf("Insira a segunda nota:\n");
    ok = scanf("%f", &nota2);
    if (nota2 >= 0.0f && nota2 <= 10.0f){
      float media = (nota1*0.4 + nota2*0.6);
      printf("A média é: %f\n", media);
      if (media >= 9.0f && media <= 10.0f) {
        printf("Menção SS, parabéns!\n");
      }
      else if (media >= 7.0f && media <= 8.9f) {
        printf("Menção MS, muito bem!\n");
      }
      else if (media >= 5.0f && media <= 6.9f) {
        printf("Menção MM\n");
      } 
      else if (media >= 3.0f && media <= 4.9f) {
        printf("Menção MI\n");
      }
      else if (media >= 0.1f && media <= 2.9f) {
        printf("Menção II\n");
      }
      else if (media == 0.0f) {
        printf("Menção SR\n");
      }
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