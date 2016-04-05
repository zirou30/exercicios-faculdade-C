#include <stdio.h>


int main() {


	int soma = 0; //Armazena a soma dos números pares encontrados
	int numero_inicial, numero_final; //Armazenam o numero inicial e final do intervalo

	printf("Digite o número inicial: "); //Solicita que informe o número inicial do intervalo
	scanf("%d", &numero_inicial); //Armazena na variável numero_inicial


	printf("Digite um número final: "); //Solocita que informe o número final do intervalo
	scanf("%d", &numero_final); //Armazena na variável numero_final

	

	/*
	Define uma variavel contador( i ) com valor inicial igual ao numero inicial do intervalo( numero_inicial )
	Enquanto contador i for MENOR OU IGUAL o numero final informado pelo usuário
	Soma 1 ao valor atual da variável
	*/


	for (int i = numero_inicial; i <= numero_final; i++) { 
		
		//Verifica se o número é par( se o resto da divisao por 2 é IGUAL a 0)
		if (i % 2 == 0) {
			//Se o resto é 0 o número é PAR e é somado ao valor atual da variável soma
			soma += i; 

		}
		
	}
	//FIM LOOP

	//Imprime o valor total da soma
	printf("A soma dos números é %d\n", soma);

	
}