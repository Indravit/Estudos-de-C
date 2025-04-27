#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    
	char operador;
    double num1, num2, resultado;

    printf("Digite um operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%lf", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 != 0)
                resultado = num1 / num2;
            else {
                printf("Erro: Divis�o por zero n�o � permitida.\n");
                return 1;
            }
            printf("Resultado: %.2lf\n", resultado);
            break;
        default:
            printf("Operador invalido.\n");
            return 1;
    }

    return 0;
}
