#include <stdio.h>

int main() {
  //Declaração das variaveis
  float a, b;
  
  //Imprime nada tela um cabeçalho para o programa
  printf("***************************************\n");
  printf("        QUAL NÚMERO É MAIOR\n");
  printf("***************************************\n\n");

  //Socilita e armazena valores paras as variaveis a e b
  printf("Dite o primeiro número: ");
  scanf("%f", &a );

  printf("Digite o segundo número: ");
  scanf("%f", &b);

  //Verifica se os números digitados são iguais
  if(a == b) { 
    printf("O número %.2f é igual ao número %.2f\n", a, b);
  }
  //Verifica qual número é maior
  else if (a > b) {
  	printf("O numero %.2f é maior que %.2f\n", a, b);
  } 
  else {
  	printf("O numero %.2f é maior que %.2f \n", b, a);
  }
}