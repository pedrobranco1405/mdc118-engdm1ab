#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao = 0;

    do {
        int ok = system("clear");
        printf("Jogo da Velha\n");//menu principal
        printf("1 - JOGAR\n");
        printf("2 - RESULTADOS\n");
        printf("3 - AJUDA\n");
        printf("4 - SAIR\n");
        printf("Escolha uma opção => ");
        ok = scanf("%i", &opcao);
        if (!ok) opcao = 0;
        while (getchar() != '\n'); 
        switch(opcao) {
            case 1: { //opcao jogar o jogo
                ok = system("clear");
                char nome1[31];
                char nome2[31];
                printf("Nome do jogador 1 (X): ");
                ok = scanf("%[^\n]s", nome1);
                while (getchar() != '\n');
                printf("Nome do jogador 2 (O): ");
                ok = scanf("%[^\n]s", nome2);
                while (getchar() != '\n');
                printf("Olá, %s e %s\n", nome1, nome2);
                printf("Pressione ENTER para iniciar:");
                getchar();

                //cria o "tabuleiro" vazio
                char tabuleiro[3][3];
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        tabuleiro[i][j] = ' ';
                    }
                }

                int jogador = 1;
                int vencedor = 0;

                while (1) {
                    ok = system("clear");

                    //imprime o tabuleiro vazio
                    printf("\n");
                    for (int i = 0; i < 3; i++) {
                        printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
                        if (i < 3 - 1) {
                            printf("---|---|---\n");
                        }
                    }
                    printf("\n");

                    char marca = (jogador == 1) ? 'X' : 'O';
                    char* nome = (jogador == 1) ? nome1 : nome2;

                    // jogadas
                    while (1) {
                        printf("%s (%c), insira a linha e a coluna (1, 2 ou 3): ", nome, marca);
                        int linha, coluna;
                        ok = scanf("%d %d", &linha, &coluna);
                        while (getchar() != '\n'); // Limpar buffer

                        if (ok && linha >= 1 && linha <= 3 && coluna >= 1 && coluna <= 3 && tabuleiro[linha - 1][coluna - 1] == ' ') {
                            tabuleiro[linha - 1][coluna - 1] = marca;
                            break;
                        } else {
                            printf("Posição inválida. Tente novamente.\n");
                        }
                    }

                    //verifica se ha vencedor
                    for (int i = 0; i < 3; i++) {
                        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') {
                            vencedor = 1;
                        }
                        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ') {
                            vencedor = 1;
                        }
                    }
                    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') {
                        vencedor = 1;
                    }
                    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ') {
                        vencedor = 1;
                    }

                    if (vencedor) {
                        printf("\n");
                        for (int i = 0; i < 3; i++) {
                            printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
                            if (i < 3 - 1) {
                                printf("---|---|---\n");
                            }
                        }
                        printf("\n");
                        printf("%s (%c) venceu!\n", nome, marca);
                        printf("Pressione ENTER para voltar ao menu.");
                        getchar();
                        break;
                    }
                    //verifica empate
                    int empate = 1;
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            if (tabuleiro[i][j] == ' ') {
                                empate = 0;
                            }
                        }
                    }

                    if (empate) {
                        printf("\n");
                        for (int i = 0; i < 3; i++) {
                            printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
                            if (i < 3 - 1) {
                                printf("---|---|---\n");
                            }
                        }
                        printf("\n");
                        printf("Deu Velha!\n");
                        printf("Pressione ENTER para voltar ao menu.");
                        getchar();
                        break;
                    }

                    jogador = (jogador == 1) ? 2 : 1;
                }
                break;
            }  
            case 2:{  //opcao podio
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
            case 3: { //opcao ajuda/regras 
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
            }  
            case 4: { //opcao sair
                printf ("Até logo!\n");
                break;
            } 
            default: { 
                printf("Opção inválida! Pressione ENTER para continuar.\n");
                getchar();
            }
        } 
    } while (opcao != 4);

    return 0;    
}
