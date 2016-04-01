/*
Elaborar um algoritmo que verifique o nivel de água em um reservatório.
Este algoritmo verificará por 10 vezes consecutivas se o reservatório está vazio ou cheio.
Caso o reservatório esteja entre os valores de 1 a 9, 
o programa deverá exibir a mensagem "Reservatório OK"; caso o valor seja < 1, 
o programa deverá exibir a mensagem "Reservatório Vazio"; caso o valor seja > 9, 
o programa deverá exibir a mensagem "Reservatório cheio".


OBS: Dentro do laço de repetição, 
deverá existir uma função para sortear um intervalo de números indo de 0 a 10.
Tentar usar função Randômica.

OBS2: Feito no linux que aceita acentos por padrão, no windows será necessário removê-los.

Autor: Luiz Filipe V
*/

//Bibliotecas 
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>


//Função que gera um número aleatório
int aleatorio(int range) {
  int num;
  num = rand() % range;
  return num;
}


int main(){

  int nivel_reservatorio; //Variavel que armazena o nivel do reservatório(1 a 10 gerado aleatóriamente);
  int numero_teste = 1;  //Contador de testes

  for (int i = 1; i <= 10; i++) {  //Loop que obriga o processo se repetir 10 vezes
  	                               //Para cada loop um novo valor de 0 a 10 será gerado
  	
  	//Chamada da função aleatório para gerar um valor para o nivel do reservatório
  	nivel_reservatorio = aleatorio(11);

    //Se o número do reservatório for igual a 0:
  	if (nivel_reservatorio == 0) {
  		printf("*****************************************\n");
  		printf("*              RELATÓRIO                *\n");
  		printf("*****************************************\n");
  		printf("Teste número: %d\n", numero_teste);
  		printf("Nivel do reservatório: %d\n", nivel_reservatorio);
  		printf("Resultado: O reservatório esta VAZIO\n");
  		printf("*****************************************\n\n\n");
  	}
  	//Se o número do reservatório for maior ou igual a 1 ou menor ou igual a 9
  	else if (nivel_reservatorio >= 1 && nivel_reservatorio <= 9) {
  		printf("*****************************************\n");
  		printf("*              RELATÓRIO                *\n");
  		printf("*****************************************\n");
  		printf("Teste número: %d\n", numero_teste);
  		printf("Nivel do reservatório: %d\n", nivel_reservatorio);
  		printf("Resultado: O reservatório esta OK\n");
  		printf("*****************************************\n\n\n");
  	}
  	//Se nenhuma das condições acima for True, automaticamente o nivel é 10 e esta cheio
  	else {
  		printf("*****************************************\n");
  		printf("*              RELATÓRIO                *\n");
  		printf("*****************************************\n");
  		printf("Teste número: %d\n", numero_teste);
  		printf("Nivel do reservatório: %d\n", nivel_reservatorio);
  		printf("Resultado: O reservatório esta CHEIO\n");
  		printf("*****************************************\n\n\n");
  	}
  	//Incrementa + 1 na variavel que marca o número do teste sendo realizado.
  	numero_teste++;
  	}
  }

