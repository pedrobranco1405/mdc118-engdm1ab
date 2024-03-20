/* 6. Faça um programa em C que calcule as raízes de uma equação do 2º grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a). */
#include <stdio.h>
#include <math.h>

int main() {
  float A;
  float B;
  float C;

  printf("insira o valor de A: ");
  float deu_certo = scanf("%f" , &A);
  printf("insira o valor de B: "); 
  deu_certo = scanf("%f" , &B);
  printf("insira o valor de C: ");
  deu_certo = scanf("%f" , &C);
  float x1 = (-B + sqrt(B*B - 4*A*C))/(2*A);
  float x2 = (-B - sqrt(B*B - 4*A*C))/(2*A);
  printf("x1 = %f\n" , x1);
  printf("x2 = %f\n" , x2);
  return 0;
}
 // shell ./bhaskara
