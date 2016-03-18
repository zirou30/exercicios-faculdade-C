/*
Questão -1- 
Escreva um algoritmo que simule uma calculadora: Leia 2 números, o sinal (+ - / x) e
retorne o resultado.
*/

#include <stdio.h>

int main() {
  //Declaração das variáveis
  int a, b, opt;

  //Verifica o tipo de operação que o usuário deseja fazer
  printf("*************************************** \n");
  printf("Qual tipo de operação deseja fazer? \n");	
  printf("1 - Soma \n");
  printf("2 - Subtraçao \n");
  printf("3 - Multiplicação \n");
  printf("4 - Divisao\n");
  printf("*************************************** \n");
  scanf("%d", &opt);


  //Analisa a resposta do usuaŕio e de acordo com ela faz o cálculo e imprime o resultado
  if(opt == 1) { 
  	printf("Digite um valor para variável A: ");
  	scanf("%d", &a);

  	printf("Digite um valor para variável B: ");
  	scanf("%d", &b);


    printf("O resultado da soma entre %d e %d, é igual a %d \n", a, b, a+b);

  }
  else if(opt == 2) {

   printf("Digite um valor para variável A: ");
  	scanf("%d", &a);

  	printf("Digite um valor para variável B: ");
  	scanf("%d", &b);


    printf("O resultado da subtração entre %d e %d, é igual a %d \n\n", a, b, a-b);

  }
  else if(opt == 3){ 
  	printf("Digite um valor para variável A: ");
  	scanf("%d", &a);

  	printf("Digite um valor para variável B: ");
  	scanf("%d", &b);


    printf("O resultado da multiplicação entre %d e %d, é igual a %d \n", a, b, a*b);
  }
  else if(opt == 4) {
  	printf("Digite um valor para variável A: ");
  	scanf("%d", &a);

  	printf("Digite um valor para variável B: ");
  	scanf("%d", &b);

    printf("O resultado da divisão entre %d e %d, é igual a %d \n", a, b, a/b);
  }
  else {
    printf("Você não digitou uma opção válida\n");
  }
}

