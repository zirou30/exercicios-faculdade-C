//Alunos: Luiz Filipe Virtuoso, Hudson Cosme Ferreira, Victor Henrique Paiva

//vhpos.ss@gmail.com

/*
QUESTÃO 01 (3pts) – Elabore um programa em C para ler o salário de um vendedor e suas três
ultimas vendas, caso a média aritmética das vendas seja igual ou superior à R$ 1.000,00 e inferior
à R$ 5.000,00, o funcionário recebe 3% a mais em seu salário, caso a média aritmética das vendas
seja superior ou igual à R$ 5.000,00 e inferior à R$ 15.000,00, o funcionário recebe 5% a mais em
seu salário, caso a média aritmética das vendas seja superior ou igual à R$ 15.000,00, o
funcionário recebe 7% a mais em seu salário, caso o funcionário não faça venda alguma, ele tem
um desconto de 3% em seu salário normal. Ao final deve ser impresso o valor a receber pelo
funcionário
*/

#include <stdio.h>  //Cabeçalho padrão de entrada/saída    

int main() {
	float salario, vendas, media, novo_salario;
	char confirma_vendas;


	printf("Digite o valor do seu salario: ");
	scanf("%f", &salario);

	printf("Você vendeu esse mês( responda s ou n ): ");
	scanf(" %c", &confirma_vendas);

         
    if (confirma_vendas == 's' || confirma_vendas == 'S') { 
		for (int i = 1; i <= 3; i++) {
		printf("Digite o valor de uma das suas 3 ultimas vendas: ");
		scanf("%f", &vendas);
		media += vendas;
		}
	}
	else if (confirma_vendas == 'n' || confirma_vendas == 'N') {
 		novo_salario = salario - (salario * 0.03);
 		printf("O vendedor vai receber um novo salario no valor de R$ %.2f\n", novo_salario);
	}

	media = (media/3.0);

	if (media > 0 && media < 1000) {
		printf("**************************************************************************\n");
		printf("O vendedor não se qualificou para para receber comissão no mês atual\n");
		printf("**************************************************************************\n");
	}
	else if (media >= 1000 && media < 5000) {
		novo_salario  = (salario * 0.03) + salario;
		printf("**************************************************************\n");
		printf("A média do valor de vendas foi R$ %.2f\n", media);
		printf("O vendedor se qualificou para receber comissão no valor 3%%\n");
		printf("O vendedor vai receber R$ %.2f no mês atual\n", novo_salario);
		printf("**************************************************************\n");
	}
	else if (media >= 5000 && media < 15000) {
		novo_salario = (salario * 0.05) + salario; 
		printf("**************************************************************\n");
		printf("A média do valor de vendas foi R$ %.2f\n", media);
		printf("O vendedor se qualificou para receber comissão no valor 5%%\n");
		printf("O vendedor vai receber R$ %.2f no mês atual\n", novo_salario);
		printf("**************************************************************\n");
	}
	else if ( media >= 1500) {
		novo_salario = (salario * 0.07) + salario;
		printf("**************************************************************\n");
		printf("A média do valor de vendas foi R$ %.2f\n", media);
		printf("O vendedor se qualificou para receber comissão no valor 7%%\n");
		printf("O vendedor vai receber R$ %.2f no mês atual\n", novo_salario);
		printf("**************************************************************\n");
	}

}




