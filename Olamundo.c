#include <stdio.h>

int main (){

    char login[31];
    char senha[31];
    int ae2;
    int chaveHash = 221104;
    int chaveHashText;

    printf("Insira seu login: \n");
    scanf("%s", &login);
    printf("Insira sua senha: \n");
    scanf("%s", &senha);
    printf("Insira seu código AE2 do seu app ou SMS: \n");
    scanf("%d", &ae2);
    printf("Insira sua chave privada para descriptografia: \n");
    scanf("%d", &chaveHashText);

     if (chaveHashText == chaveHash){

         printf("Login efetuado com sucesso!\n");

     } else{

      printf("Chave incorreta!\n");

     }
     


}



