/* 10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).*/
#include <stdio.h>

void decomporNumero(int numero, int *unidades, int *dezenas, int *centenas, int *milhares) {
    *unidades = numero % 10;
    *dezenas = (numero / 10) % 10;
    *centenas = (numero / 100) % 10;
    *milhares = numero / 1000;
}

int main() {
    int numero, unidades, dezenas, centenas, milhares;

    // Solicita ao usuário inserir o número
    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    // Chama a função para decompor o número
    decomporNumero(numero, &unidades, &dezenas, &centenas, &milhares);

    // Exibe o resultado
    printf("%d é decomposto em %d unidades, %d dezenas, %d centenas e %d milhares.\n", numero, unidades, dezenas, centenas, milhares);

    return 0;
}
