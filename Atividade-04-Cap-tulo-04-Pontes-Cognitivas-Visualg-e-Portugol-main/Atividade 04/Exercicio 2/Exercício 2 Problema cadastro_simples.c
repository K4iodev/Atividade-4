#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    double salario;
    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu salario: ");
    scanf("%lf", &salario);
    printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Salario: R$ %.2lf\n", salario);

    return 0;
}