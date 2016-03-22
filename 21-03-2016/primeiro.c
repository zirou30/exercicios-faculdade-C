#include <stdio.h>

/*
Construa um algoritmo que leia um número inteiro de 1 a 7 e informe o dia da semana correspondente, 
sendo domingo o dia de número 1. Se o número não corresponder a um dia da semana, 
mostre uma mensagem de erro.
*/

int main() {
  int dia;
  int continuar = 1;
  int tentativas = 1;
  int total_erros = 1;


  while(continuar) {
    printf("\nTentativa %d\n", tentativas);
    printf("Informe o dia(de 1 a 7): ");
    scanf("%d", &dia); 

    switch(dia) {
      case 1:
        printf("Hoje é domingo\n");
        break;
      case 2:
        printf("Hoje é segunda\n");
        break;
      case 3:
        printf("Hoje é terça\n");
        break;
      case 4:
        printf("Hoje é quarta\n");
        break;
      case 5:
        printf("Hoje é quinta\n");
        break;
      case 6: 
        printf("Hoje é sexta\n");
        break;
      case 7:
        printf("Hoje é sábado\n");
        break;
      default:
        printf("Você digitou um número inválido\n");
        total_erros++;
        if (total_erros > 3) {
          printf("\n*******************************************\n");
          printf("Você não digitou um número inválido 3 vezes\n");
          printf("*******************************************\n");
          continuar = 0;
        }
    }
    tentativas++;
  }
}