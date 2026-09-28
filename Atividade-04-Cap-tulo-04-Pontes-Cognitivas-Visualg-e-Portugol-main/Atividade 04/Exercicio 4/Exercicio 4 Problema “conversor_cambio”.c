#include <stdio.h>

int main() {
    double cotacao, qtdDolares, valorBase, iof, totalPagar;
    printf("Digite a cotacao do dolar (R$): ");
    scanf("%lf", &cotacao);
    printf("Quantos dolares voce deseja comprar? ");
    scanf("%lf", &qtdDolares);
    valorBase = qtdDolares * cotacao;
    iof = valorBase * 0.011;
    totalPagar = valorBase + iof;
    printf("\n--- COMPROVANTE DE CAMBIO ---\n");
    printf("Valor base em Reais: R$ %.2lf\n", valorBase);
    printf("Taxa de IOF (1.1%%): R$ %.2lf\n", iof);
    printf("Total a pagar em Reais: R$ %.2lf\n", totalPagar);
    return 0;
}

//Nao usar virgula ao responder quantos dolares quero comprar, o correto e usar ., se usar virgula vai dar erro.
