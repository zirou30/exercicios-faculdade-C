/*
Questão -3- 
Crie um programa que leia 2 números e no final informe qual é o maior.
*/

#include <stdio.h>

int main() {
  //Declaração das variaveis
  double a, b;
  
  //Imprime nada tela um cabeçalho para o programa
  printf("***************************************\n");
  printf("        QUAL NÚMERO É MAIOR\n");
  printf("***************************************\n\n");

  //Socilita e armazena valores paras as variaveis a e b
  printf("Dite o primeiro número: ");
  scanf("%lf", &a );

  printf("Digite o segundo número: ");
  scanf("%lf", &b);

  //Verifica se os números digitados são iguais
  if(a == b) { 
    printf("O número %.2lf é igual ao número %.2f\n", a, b);
  }
  //Verifica qual número é maior
  else if (a > b) {
  	printf("O numero %.2lf é maior que %.2f\n", a, b);
  } 
  else {
  	printf("O numero %.2lf é maior que %.2f \n", b, a);
  }
}