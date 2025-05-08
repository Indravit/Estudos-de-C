#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float cotacao, reais, dolares;
    char input[100];

    printf("Digite a cota��o do d�lar hoje (use ponto ou v�rgula como separador decimal): ");
    fgets(input, sizeof(input), stdin);
    // Substituir v�rgula por ponto
    for (int i = 0; input[i]; i++) {
        if (input[i] == ',') input[i] = '.';
    }
    if (sscanf(input, "%f", &cotacao) != 1 || cotacao <= 0) {
        printf("Cota��o inv�lida!\n");
        return 1;
    }

    printf("Digite o valor em reais que deseja converter: R$ ");
    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i]; i++) {
        if (input[i] == ',') input[i] = '.';
    }
    if (sscanf(input, "%f", &reais) != 1 || reais < 0) {
        printf("Valor em reais inv�lido!\n");
        return 1;
    }

    dolares = reais / cotacao;

    printf("Com R$%.2f voc� pode comprar US$%.2f (cota��o: %.2f)\n", reais, dolares, cotacao);

    return 0;
}

