#include <stdio.h>

int main(){

// torre = 5, bispo = 5, rainha = 8;
int torre = 1, bispo = 1, rainha = 1;
int selecao;
printf("-- Movimentação de peças de xadrez --\n");
printf("\n");

printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");

printf("\n");

printf("Selecione qual peça você deseja movimentar: ");
scanf("%d", &selecao);

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
}else{

  printf("Opção inválida!\n");

}



return 0;

}