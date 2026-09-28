#include <stdio.h>

int main() {
    char nome[50];
    double n1, n2, n3, media;
    printf("Nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &n3);
    media = (n1 * 2.0 + n2 * 3.0 + n3 * 5.0) / 10.0;
    printf("\nO aluno %s obteve MEDIA FINAL = %.1lf\n", nome, media);
    return 0;
}