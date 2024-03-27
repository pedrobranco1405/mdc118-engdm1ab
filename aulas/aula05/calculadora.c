#include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;

  printf("Digite o primeiro número: ");
  int ok = scanf("%d", &numero1);

  printf("Digite o segundo número: ");
  ok = scanf("%d", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos números é: %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtração dos números é: %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicação dos números é: %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2;
  float resto = 1.0f * (numero1 % numero2);
  printf("A divisão dos números é: %f\n", divisao);
  printf("com resto: %f\n", resto);

  printf("O incremento do primeiro número é: %i\n", numero1++);
  printf("O incremento do primeiro número é: %i\n", ++numero1);

  printf("O decremento do primeiro número é: %i\n", numero1--);
  printf("O decremento do primeiro número é: %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro número é: %f\n", raiz_quadrada);

  double potencia = pow(numero1, 4);
  printf("O primeiro número elevado a 4 é: %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O logaritmo de base 2 do primeiro número é: %f\n", logaritmo2);

  double logaritmo10 = log(numero1);
  printf("O logaritmo de base 10 do primeiro número é: %f\n", logaritmo10);

  const double PI = 3.14159265358979323846;
  double seno = sin(numero1 * (PI / 180)); 
  printf("O seno do primeiro número é: %f\n", seno);

  return 0;
}