#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    double salario;
    char Genero;

    printf("Digite seu nome: ");
    scanf("%s", nome); // Lê uma palavra (sem espaços)

    printf("Digite seu Genero: ");
    scanf("%c[0]", &Genero);

    printf("Digite sua idade: ");
    scanf("%d", &idade); // Lê um número inteiro

    printf("Digite seu salario: ");
    scanf("%lf", &salario); // Lê um número double

    printf("DADOS DIGITADOS:\n");
    printf("Nome: %s\n", nome);
    printf("Genero: %c\n", Genero);
    printf("Idade: %d\n", idade);
    printf("Salario: R$ %.2f\n", salario);

    return 0;
}
