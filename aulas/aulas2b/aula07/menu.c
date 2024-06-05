#include <stdio.h>
#include <stdlib.h>

int main (){
  int opcao = 0;

  do {
    int ok = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Resultado\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção => ");
    ok = scanf("%i", &opcao);
    if (!ok) opcao = 0;
    while (getchar() != '\n'); // limpar buffer do teclado
    switch(opcao) {
      case 1: {
        ok = system("clear");
        char nome [31];
        printf("Nome do jogador: ");
        ok = scanf("%[^\n]s", nome);
        while (getchar() != '\n');
        printf("Olá, %s\n", nome);
        printf("Pressione ENTER p/ continuar:");
        getchar();
        break;
      }  
      case 2:{
        ok = system("clear");
        printf("Resultado:\n");
        printf("1o Lugar - José    -  1000\n");
        printf("2o Lugar - Pedro   -   800\n");
        printf("3o Lugar - Jardelson - 600\n");
        printf("4o Lugar - Carlos   -  420\n");
        printf("5o Lugar - João    -   300\n");
        printf("-Pressione ENTER p/ voltar\n");
        getchar();
        break;
      }  
      case 3:    break;
      case 4: printf ("Até logo!\n"); break;
      default:
        printf("Opção invalida! Pressione ENTER p/ continuar.\n");
        getchar();
    }
  } while (opcao != 4);
return 0;    
}