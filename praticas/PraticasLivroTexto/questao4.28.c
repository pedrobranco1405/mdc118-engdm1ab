/*Faça um programa para resolver a equação: x=(32−y)/(2a+b). Sendo a=10, b=2 e
y=5.*/
#include <stdio.h>

int main() {
  int a = 10;
  int b = 2;
  int y = 5;
  int x = (32-y)/(2*a+b);
  printf("x = %i\n", x);
  return 0;
}