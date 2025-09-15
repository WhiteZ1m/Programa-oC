#include <stdio.h>

int main(){

// torre = 5, bispo = 5, rainha = 8;
int torre = 1, bispo = 1, rainha = 1, cavalo = 1;
int selecao;
int movimentocavalo;
printf("-- Movimentação de peças de xadrez --\n");
printf("\n");

//Peças disponíveis para movimentação:

printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
printf("4. Cavalo\n");

printf("\n");

printf("Selecione qual peça você deseja movimentar: "); //Selecionar a peça a movimentar:
scanf("%d", &selecao);

//Checando qual peça foi selecionada:

if(selecao == 1){
    for (torre; torre <= 5; torre++)
    {
      printf("Torre moveu uma casa para direita!\n");
    }
}else if(selecao == 2){
    do {
      printf("Bispo moveu uma casa para cima a direita (diagonal)!\n");
      bispo++;
    } while (bispo <= 5);
}else if(selecao == 3){
    while (rainha <= 8){
    printf("Rainha moveu uma casa para esquerda!\n");
        rainha++;
    }
    
}else if(selecao == 4){

      while(cavalo <= 1){
        for (cavalo; cavalo <= 1; cavalo++){
          printf("\n"); //Só para pular linha.
          printf("Cavalo se moveu dois para frente e dois para direita (L) \n");
          printf("\n");
        
          do{

          printf("Movimento em tabuleiro do cavalo: \n");

          printf("\n");

             printf("Cima\n");
             printf("Cima\n");
             printf("Direita\n");
             printf("Direita\n");

             printf("\n");

          } while (movimentocavalo == cavalo);

        }
        printf("\n");
      }

    }


 //Opção inválida cai no else:

else{

  printf("Opção inválida!\n");

}



return 0; //Final.

}