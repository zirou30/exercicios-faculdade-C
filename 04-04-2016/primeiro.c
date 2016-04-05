#include <stdio.h>  //Cabeçalho padrão de entrada/saída
#include <stdlib.h> //Alocação de memória


/*
Dada uma dívida de 10000 reais que cresce a juros de 2,5% ao mês e uma aplicação de 1500 reais com 
rendimento de 4% ao mês, escrever um algoritmo que determina o número 
de meses necessários para pagar a dívida.
*/




//Função principal
int main() {

	float divida = 10000;  //Variável que armazena a divida que aumenta com juros mensal de 2.5%
	float aplicacao = 1500;  //Variável que armazena a aplicacao que aumenta com juros mensal de 2.5%
	float juros_divida = 0.025; //Variavel que armazena o valor do juros da divida(2.5%), regra de três 2.5/100
	float juros_aplicacao = 0.04; //Variavel que armazena o valor do juros da aplicacao(4%), regra de três 4/100
	int mes = 0; //Contador para indicar o número de meses necessários
	

    //Enquanto o valor da dívida for MENOR que o valor da aplicação, faça:
	while (divida > aplicacao) {
		/*
		Calcula o valor de 2.5%( juros/mes ) sobre o valor atual da divida e soma ao valor atual da divida
		usando a regra de três para calcular o valor juros sobre o valor da divida

		Na primeira vez que o loop( while ) for executado ele vai fazer 
		divida = (10000 * 0.04) + 10000
		Na segunda vez que o loop( while ) for executado ele vai fazer
		divida = (10250 * 0.04) + 10250
		e assim sucessivamente.
		*/
		aplicacao = (aplicacao * juros_aplicacao) + aplicacao; 
		//A mesma coisa que na operação acima porém com os dados do juros para a aplicação( 4%/mês )
		divida = (divida * juros_divida) + divida;
		//Soma 1 ao valor atual da variável para cada vez que o loop é executado
		mes++;
	}
	//FIM LOOP

	/*
	Quando a divida passar a ser MENOR que o valor da aplicação o programa sai do loop( while ) 
	e imprime os resultados abaixo
	*/

	printf("*****************************************************\n");
	//Imprime a quantidade de meses necessários
	printf("Serão necessários %d meses para pagar a divida\n",mes); 
	//Imprime a divida total depois de todos os meses
	printf("Em %d meses sua divida acumulou em %.2f\n", mes, divida); 
	//Imprime o valor total da aplicação ao final de todos os meses passado
	printf("Em %d meses sua aplicação acumulou em %.2f\n", mes, aplicacao);
	printf("*****************************************************\n");
}