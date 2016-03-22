#include <stdio.h>

/*
Construa um algoritmo que leia um número inteiro de 1 a 7 e informe o dia da semana correspondente, 
sendo domingo o dia de número 1. Se o número não corresponder a um dia da semana, 
mostre uma mensagem de erro.
*/

int main() {
  int dia;
  int total_tentativas = 3;
  int tentativas = 1;


  for (int  i = 1; i <= total_tentativas; i++) {
  	printf("\nTentativa %d\n", tentativas);
    printf("Informe o dia(de 1 a 7): ");
    scanf("%d", &dia); 

    if (dia == 1) {
    	printf("Hoje é domingo\n");
    }
    else if (dia == 2) {
    	printf("Hoje é segunda\n");
    }
    else if (dia == 3) {
    	printf("Hoje é terça\n");
    }
    else if (dia == 4) {
    	printf("Hoje é quarta\n");
    }
    else if (dia == 5) {
    	printf("Hoje é quinta\n");
    }
    else if (dia == 6) {
    	printf("Hoje é sexta\n");
    }
    else if (dia == 7) {
    	printf("Hoje é sábado\n");
    }
    else {
    	printf("\nVocê não digitou um número válido(somente números de 1 e 7)\n");
    	if (i == total_tentativas){
    		printf("Você errou 3 vezes\n");
    		break;
    	}
    }
    tentativas++;
  }
}