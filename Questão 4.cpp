#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    const float PI = 3.1415;
    float raio, area;

    printf("Digite o raio do c�rculo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A �rea do c�rculo �: %.2f\n", area);

    return 0;
}

