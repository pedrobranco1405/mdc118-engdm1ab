#include <stdio.h>

int main() {
  float A1 = 0;
  float A2 = 0;

  printf("insira a sua nota de A1: ");
  scanf("%f" , &A1);
  
  printf("insira a sua nota de A2: ");
  scanf("%f" , &A2);
  
  float media = (A1*0.4) + (A2*0.6);
  
  printf("a sua media é: %f\n", media);
  return 0;
  
}