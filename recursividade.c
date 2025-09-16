#include <stdio.h>


void recursivo(int numero){

if(numero > 0)
{

printf("%d \n", numero);
recursivo (numero - 1);

}


}



int main(){

int quantidade = 10;

printf("Contagem regressiva: \n");
printf("\n");
recursivo(quantidade);
printf("\n");

    return 0;

}