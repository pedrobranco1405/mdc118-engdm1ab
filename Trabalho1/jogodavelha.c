#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int opcao = 0;

    do {
      int ok = system("clear");
      printf("Jogo da Velha\n");
      printf("1 - JOGAR\n");
      printf("2 - RESULTADOS\n");
      printf("3 - AJUDA\n");
      printf("4 - SAIR\n");
      printf("Escolha uma opção => ");
      ok = scanf("%i", &opcao);
      if (!ok) opcao = 0;
      while (getchar() != '\n'); // limpar buffer do teclado
      switch(opcao) {
        case 1: {
          ok = system("clear");
          char nome1 [31];
          char nome2 [31];
          printf("Nome do jogador 1: ");
          ok = scanf("%[^\n]s", nome1);
          while (getchar() != '\n');
          printf("Nome do jogador 2: ");
          ok = scanf("%[^\n]s", nome2);
          while (getchar() != '\n');
          printf("Olá, %s e %s\n", nome1, nome2);
          printf("Pressione ENTER p/ continuar:");
          getchar();
          break;
        }  
        case 2:{
          ok = system("clear");
          printf("Resultado :\n");
          printf("Posição: -  Nome:   - Vitórias:\n");
          printf("1o Lugar -  José    -      20\n");
          printf("2o Lugar -  Pedro   -      10\n");
          printf("3o Lugar -  Jardelson -     6\n");
          printf("4o Lugar -  Carlos   -      4\n");
          printf("5o Lugar -  João    -       2\n");
          printf("- Pressione ENTER p/ voltar -\n");
          getchar();
          break;
        }  
        case 3:
          ok = system("clear");
          printf("Como jogar:\n");
          printf("1 - O jogo é jogado em uma grade 3x3.\n");
          printf("2 - Cada jogador escolhe um símbolo para jogar.\n");
          printf("3 - O primeiro jogador joga com o símbolo X e o segundo com O.\n");
          printf("4 - Os jogadores alternam suas jogadas.\n");
          printf("5 - O objetivo é conseguir uma linha, coluna ou diagonal com o símbolo de sua escolha.\n");
          printf("6 - Na sua vez, insira 2 números de 1 a 3 para indicar a posição da sua jogada, sendo o primeiro para definir linha, e o segundo a coluna da sua jogada.\n");
          printf("- Pressione ENTER p/ voltar -\n");
          getchar();
          break;
        case 4: printf ("Até logo!\n"); break;
        default:
          printf("Opção invalida! Pressione ENTER p/ continuar.\n");
          getchar();
      }
    } while (opcao != 4);
  return 0;    
  }
