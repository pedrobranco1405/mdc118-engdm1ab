/*9. Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.*/
#include <stdio.h>

int main() {
    int num;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    
    printf("O caractere correspondente na tabela ASCII ao valor %d é: %c\n", num, num);

    return 0;
}
