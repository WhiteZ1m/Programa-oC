#include <stdio.h>

//print dos movimentos:

void movebispo(int movbispo) //Função bispo:
{

if (movbispo <= 5){
while(movbispo <= 5){
printf("Bispo moveu uma casa para cima!\n");
printf("Bispo moveu uma casa a direita\n");
movbispo++;
}
}
printf("Total de casas movidas: 5\n");
}

void moverainha(int movrainha)
{
printf("Rainha moveu uma casa para esquerda!\n");
}

void movetorre()
{
  printf("Torre moveu uma casa para direita!\n");
  }


  //Push Main:


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

  if(selecao == 1){ //Seleção torre.
      for (torre; torre <= 5; torre++)
          {
                movetorre(torre);
                      if (torre >= 5){
                              printf("Total de casas movidas: 5\n");
                                    }
                                        }
                                        }else if(selecao == 2){ //Seleção bispo.
                                            do {
                                                  if(bispo <= 1){
                                                        movebispo(bispo);
                                                              bispo++;
                                                                    }
                                                                        } while (bispo <= 1);
                                                                        }else if(selecao == 3){  //Seleção rainha.
                                                                            while (rainha <= 8){
                                                                                  moverainha(rainha);
                                                                                          rainha++;
                                                                                                  switch(rainha){
                                                                                                            case 9:
                                                                                                                       printf("Total de casas movidas: 8\n");
                                                                                                                                  break;

                                                                                                                                          }
                                                                                                                                              }
                                                                                                                                                  
                                                                                                                                                  }else if(selecao == 4){ //seleção cavalo.

                                                                                                                                                        while(cavalo <= 1){
                                                                                                                                                                for (cavalo; cavalo <= 1; cavalo++){ //Se cavalo <= 1 execute:
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