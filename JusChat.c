#include <stdio.h>

int main(){

int opcoes;
int op1,op2,op3,op4;


printf("Feith: Que foi?\n");

printf("\n");

printf("1. Ah nada, só tava viajando aqui.\n");
printf("2. Tava pensando aqui... qual sua comida favorita?\n");
printf("3. O que você mais gosta de fazer?\n");
printf("4. Tava reparando aqui... você é bem bonita, né?..\n");

printf("\n");
printf("Digite sua opção: ");
scanf("%d", &opcoes);

switch(opcoes){

case 1:
printf("\n");
printf("Feith: Hm, eu também.\n");
printf("\n");
break;
case 2:
printf("\n");
printf("Feith: Hmmm...\n");
printf("\n");
printf("*Feith parece pensativa*\n");
printf("\n");
printf("Feith: Acho que pudim normal.\n");
printf("\n");
break;
case 3:
printf("\n");
printf("Feith: Dormir.\n");
printf("*Diz feith com a maior cara de tacho.*\n");
printf("\n");
break;
case 4:
printf("\n");
printf("Feith: ... bem... obrigada...\n");
printf("Feith: Você também é...\n");
printf("\n");
break;


}






}