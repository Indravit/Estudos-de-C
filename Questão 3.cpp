#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int num1, num2;
	float quociente;
	
	printf("Digite o primeiro n�mero inteiro:");
	scanf("%d", &num1);
	
	printf("Digite o segundo n�mero inteiro:");
	scanf("%d", &num2);
	
	printf("Soma: %d\n", num1 + num2);
    printf("Subtra��o: %d\n", num1 - num2);
    printf("Produto: %d\n", num1 * num2);
    
    if (num2 != 0){
    	quociente = (float) num1 / num2;
    	printf("Quociente: %.2f\n", quociente);
	}
    else{
    	printf("Divis�o por zero n�o � permitida.\n");
	}
	return 0;
}
