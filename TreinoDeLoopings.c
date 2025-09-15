#include <stdio.h>

int main(){

 /*

    int i = 0;

 while (i <= 10){  //Loop while


    if(i % 2 == 0) // se quiser imprimir os impares é só usar a condicional "diferente" = '!='
    {
      printf("O número par é: %d\n", i);
    }
  
    i++;

 }

 return 0;

*/


/*

// Loop for:

int numero;

do{

   printf("Digite um número par para sair do programa: ");
   scanf("%d", &numero);

   if (numero % 2 == 0){

  printf("Esse número (%d) é par!\n", numero);

   } else {

    printf("Esse número (%d) é ímpar!\n", numero);

   }


} while(numero % 2 != 0);

printf("Você saiu do programa!\n");


return 0;

*/

//Gerador de tabuada selecionavel:

int numero, i;

printf("Digite um número para calcularmos: ");
scanf("%d", &numero);

for(i = 0; i <= 10; i++)
{

printf("%d x %d = %d \n", i, numero, i * numero);   


}




return 0;


}