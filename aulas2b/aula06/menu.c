#include <stdio.h>

int main(){
  char opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar Saldo\n");
  printf("2 - Fazer recarga\n");
  printf("3 - Listar recados\n");
  printf("4 - Ligações Feitas\n");
  printf("0 - Sair\n");
  printf("Entre com uma opção:\n");
  int ok = scanf("%c", &opcao);

  switch(opcao)
    case '1': printf("Seu saldo é R$ 10,00\n"); break;
    case '2': {
      float valor;
      printf("Entre com o valor da recarga:\n");
        ok = scanf("%f", &valor);
      if(ok) {
        printf("Recarga no valor de %f efetuada com sucesso.\n", valor);
      }  
      else {
        printf("Valor inválido!\n");
      }
      break;
    }
    case '3': printf ("Você não tem recados\n"); break;
    case '4': {
      printf ("03030077700\n");
      printf ("061982045335\n");
      printf ("06149524401\n");
      break;
    }
    case '0': printf ("Até logo!\n"); break;
    default: printf("Valor inválido."); break;
return 0;     
}