#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int energia, sinal;
	
	printf("A energia est� ativa? (1 - sim, 0 - n�o):");
	scanf("%d", &energia);
	
	printf("O sinal est� ativo? (1 - sim, 0 - n�o):");
	scanf("%d", &sinal);
	
	if(energia == 1 && sinal == 1){
		printf("Em opera��o");
	}else if(energia == 0 && sinal == 1){
		printf("Modo de espera");
	}else{
		printf("Desligado");
	}
	
	return 0;
	}
