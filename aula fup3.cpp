#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int assinatura, validade;
	
	printf("Documento possui assinatura? (1 - sim, 0 - n�o):");
	scanf("%d", &assinatura);
	
	printf("Documento est� na validade? (1 - sim, 0 - n�o):");
	scanf("%d", &validade);
	
	if(assinatura && validade){
		printf("Documento v�lido");
	}else if(!assinatura){
		printf("Documento inv�lido");
	}else {
		printf("Documento expirado");
	}
	
	return 0;
}
