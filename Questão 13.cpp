#include <stdio.h>
#include <math.h>  
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    double numero, raiz;

    printf("Digite um n�mero para calcular a raiz quadrada: ");
    scanf("%lf", &numero);

    if (numero < 0) {
        printf("Erro: n�o � poss�vel calcular a raiz quadrada de um n�mero negativo.\n");
    } else {
        raiz = sqrt(numero);
        printf("A raiz quadrada de %.2f � %.2f\n", numero, raiz);
    }

    return 0;
}

