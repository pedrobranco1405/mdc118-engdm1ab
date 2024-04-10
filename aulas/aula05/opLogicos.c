#include <stdio.h>

int main() {

  int numero1, numero2;

  printf("Digite o primeiro numero: ");
  int ok = scanf("%i", &numero1);

  printf("Digite o segundo numero: ");
  ok = scanf("%i", &numero2);

  /* 0 < x < 10 -> 0 < x e x < 10 */
  int maior_que_0_e_menor_que_10 = numero1 > 0 && numero1 < 10;
  printf("O primeiro número é maior que 0 e menor que 10? %i\n", maior_que_0_e_menor_que_10);

  /* x<0, x>0 -> 0 > X ou X > 10 */

  int menor_que_0_ou_maior_que_10 = numero1 < 0 || numero1 > 10;
  printf("O primeiro número é menor que 0 ou maior que 10? %i\n", menor_que_0_ou_maior_que_10);
  /* X Não é > 0 */
  int nao_maior_que_0 = !(numero1 > 0);
  printf("O primeiro número não é maior que 0? %i\n", nao_maior_que_0);
  
  return 0;
}