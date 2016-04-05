#include <stdio.h>  //Cabeçalho padrão de entrada/saída
#include <stdlib.h> //Alocação de memória

/*
Sabe-se que o valor de cada 1000 litros de água corresponde a 2% do salário mínimo. 
Faça um programa para receber o valordo salário mínimo 
e a quantidade de água consumida em uma residência por mês. 
O algoritmo deverá calcular e mostrar: 

a) o valor da conta de água. 

b) o valor a ser pago com desconto de 15%
*/


int main() {

	//Declaração de variáveis
	//salario == variável que armazena o salário atual( informado pelo usuário )
	//conta == variável que armazena o valor total da conta a pagar
	//desconto == variável que armazena o valor do descondo de 15% sobre a conta
	//litros_gastos == variável que armazena o total de litros gastos no mês( informado pelo usuário)
	//taxa_água == o valor da taxa sobre a água( 2% do salário mínimo a para 1000 litros de água )
	float salario, conta, desconto;  
	int litros_gastos;
	float taxa_agua = 0.02;  // 2% ao mês( regra de 3: 2/100 )
	


	//Pede ao usuário que informe o valor atual do salário mínimo e armazena na variável salario
	printf("Digite o valor do salário mínimo: ");
	scanf("%f", &salario);

	//Pede ao usuário que informe a quantidade de litros gastos e armazena na variável litros gastos
	printf("Digite quantos litros foram usados nesse mês: ");
	scanf("%d", &litros_gastos);


	//calcula o valor da conta sendo esta o multiplicando a divisão do total de litros gastos por mil 
	//pela multiplicação do salário pela taxa( regra de três: (2/100) * salario)
	conta = (litros_gastos/1000) * (salario * 0.02);
	//calcula o desconto sendo esse a o valor da conta multiplicação 
	//pelo valor do desconto 15%( regra de 3: 15/100)
	desconto = (conta * 0.15);



	//Imprime os resultados na tela
	printf("***************************************************************\n");
	printf("O valor da conta de água referente ao mês atual é: R$ %.2f\n", conta);
	//A conta com desconto é conta - desconto
	printf("O valor a ser pago com desconto de 15%% é: R$ %.2f\n", conta - desconto); 
	printf("***************************************************************\n");

}