#include <stdio.h>



void exemploParametro(int numero){
    printf("o Numero que veio na tela por parametr é %d\n", numero);
    numero = numero * 2;
    printf("0 numero multiplicado por 2 do parametro é %d\n", numero);
}

int main(void){
int num = 10;
exemploParametro(num);
printf("A variavel num depois de executar a subrotina é %d", num);
}
