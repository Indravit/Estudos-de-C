#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("M�dia: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situa��o: Aprovado\n");
    } else if (media >= 5.0) {
        printf("Situa��o: Recupera��o\n");
    } else {
        printf("Situa��o: Reprovado\n");
    }

    return 0;
}

