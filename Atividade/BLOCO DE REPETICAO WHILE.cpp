#include <stdio.h>
#include <stdlib.h>
int main(){	
	int soma=101, valor;
	while(soma<=100){
		printf("Digite um valor:\n");
		scanf("%d", &valor);
		soma = soma + valor;
	}
}


