
#include <stdio.h>

int main() {
    // Declarando e inicializando as variáveis
    char produto1[50] = "Smartphone";
    char produto2[50] = "Notebook";

    double preco1 = 2500.99;
    double preco2 = 4250.00;

    int idade = 25;
    int codigo = 1024;
    char genero = 'M';

    // Exibindo os dados na tela
    printf("Produtos:\n");
    printf("O produto %s custa R$%.2f\n", produto1, preco1); printf("O produto %s custa R$ %.2f\n", produto2, preco2);
    printf("\n"); // Pula uma linha em branco
    printf("Codigo = %d\n", codigo);
    printf("\n"); // Pula uma linha em branco
    printf("Dados da pessoa: genero %c e idade %d\n", genero, idade);

    return 0;
}
