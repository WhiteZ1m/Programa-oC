#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){

    int escolhaJogador, escolhaComputador;
    srand(time(0));
   
     //Menu:
    printf("Jogo de jokenpô\n");
    prinf("Escolha uma opção:\n");
    prinf("1. Pedra\n");
    prinf("2. Papel\n");
    prinf("3. Tesoura\n");
    prinf("Digite sua escolha:\n");



    escolhaComputador = rand() % 3 + 1;
     
return 0;

}



