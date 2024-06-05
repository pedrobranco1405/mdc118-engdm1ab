#include <stdio.h>
#include <string.h>

int main() {
  enum unidade_e {
    unidade
    
  }
  struct produto_t {
    char nome[21];
    float preco;
    int quantidade;
    float valor;
    int unidade; // 0 = UN, 1 = CX, 2 = LT, 3 = KG
  };

  struct produto_t produto[5];
  for (int i = 0; i < 5; i++) {
  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%s", produto[i].nome);

  printf("Entre com a quantidade do produto: ");
  deu_certo = scanf("%i", &produto[i].quantidade);

  printf("Entre com a unidade do produto\n");
  printf("0 - unidade, 1 = caixa, 2 = lata, 3 = peso: ");
  deu_certo = scanf("%i", &produto[i].unidade);

  printf("Entre com o preco do produto: ");
  deu_certo = scanf("%f", &produto[i].preco);

  produto[i].valor = produto[i].preco * produto[i].quantidade;
  }
  printf("\n     N O T A  L E G A L\n");
  for (int i = 0; i < 5; i++) {
  printf("Item         Qtd Und   Preco   Valor\n");
  printf("%-12s %03i", produto[i].nome, produto[i].quantidade);
  
  switch (produto[i].unidade) {
    case 0: printf("  UN   "); break;
    case 1: printf("  CX   "); break;
    case 2: printf("  LT   "); break;
    case 3: printf("  KG   "); break;
  }

  printf("%8.2f%8.2f\n", produto[i].preco, produto[i].valor);
  }
  return 0;
}