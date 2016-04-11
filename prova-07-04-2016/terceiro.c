/*
QUESTÃO 03 (3pts) – Em uma loja de Computadores são vendidos 3 tipos de Computadores:
Computadores Populares, Computadores Profissionais e Computadores ExtraPowerUltraMega.
O Popular mais barato custa R$ 600,00;
O Popular mais caro custa R$ 1.500,00;
O Profissional mais barato custa R$2.000,00;
O Profissional mais caro custa R$ 8.000,00;
O ExtraPowerUltraMega mais barato custa R$ 11.000,00;
O ExtraPowerUltraMega mais caro custa R$ 25.000,00.

Elabore um programa em C para ler a quantia em dinheiro que 10 clientes possui e informar qual
computador ele tem condições de comprar e se terá direito ou não à troco. Se o cliente não tiver
dinheiro suficiente para comprar um computador informe a quantia que ele precisa inteirar para
conseguir comprar o mais barato.

Ele sempre deve comprar o melhor computador que o dinheiro dê.
Por exemplo:
- Se o cliente informar que tem somente R$ 400,00 o programa deve exibir a seguinte mensagem:
“O valor não é suficiente para adquirir um Computador, junte mais R$ 200,00 para comprar um
Computador Popular”.

- Se o cliente informar que tem R$ 5.000,00 o programa deve exibir a seguinte mensagem: “Você
receberá um computador Profissional equivalente ao valor de R$ 5.000,00”.

- Se o cliente informar que tem R$ 9.000,00 o programa deve exibir a seguinte mensagem: “Você
receberá um computador Profissional Top de Linha e receberá R$ 1.000,00 de troco”.
*/


#include <stdio.h> //Cabeçalho padrão de entrada/saída 
 
int main() {
	float preco_popular1 = 600;
	float preco_popular2 = 1500;
	float preco_profissional1 = 2000;
	float preco_profissional2 = 8000;
	float preco_powerultra1 = 11000;
	float preco_powerultra2 = 25000;
	float dinheiro_cliente;


	for (int i = 1; i <= 10; i++) {
		printf("Digite o valor total que pode gastar: ");
		scanf("%f", &dinheiro_cliente);

		if (dinheiro_cliente <= 0) {
			printf("Você não possui dinheiro, vá trabalhar\n");
		}
		else if (dinheiro_cliente < preco_popular1) {
			printf("Insuficiente, junte mais R$ %.2f para comprar o popular mais barato\n", 600 - dinheiro_cliente);
		}
		else if (dinheiro_cliente >= 600 && dinheiro_cliente < 1500 ) {
			if (dinheiro_cliente == 600 ) {
				printf("Você receberá um computador popular mais barato no valor de R$ 600 reais\n");
			}
			else {
			printf("Você receberá um computador popular mais barato no valor de R$ 600 reais\n");
			printf("Troco: R$ %.2f\n", dinheiro_cliente - preco_popular1);
			}
		}
		else if (dinheiro_cliente >= 1500 && dinheiro_cliente < 2000 ) {
			if (dinheiro_cliente == 1500 ) {
				printf("Você receberá um computador popular mais caro no valor de R$ 1500 reais\n");
			}
			else {
			printf("Você receberá um computador popular mais caro no valor de R$ 600 reais\n");
			printf("Troco: R$ %.2f\n", dinheiro_cliente - preco_popular2);
			}
		}
		else if (dinheiro_cliente >= 2000 && dinheiro_cliente < 8000 ) {
			if (dinheiro_cliente == 2000 ) {
				printf("Você receberá um computador profissional mais barato no valor de R$ 2000 reais\n");
			}
			else {
			printf("Você receberá um computador profissional mais barato no valor de R$ 2000 reais\n");
			printf("Troco: R$ %.2f\n", dinheiro_cliente - preco_profissional1);
			}
		}
		else if (dinheiro_cliente >= 8000 && dinheiro_cliente < 11000 ) {
			if (dinheiro_cliente == 8000 ) {
				printf("Você receberá um computador profissional mais caro no valor de R$ 8000 reais\n");
			}
			else {
			printf("Você receberá um computador profissional mais caro no valor de R$ 8000 reais\n");
			printf("Troco: R$ %.2f\n", dinheiro_cliente - preco_profissional2);
			}
		}
		else if (dinheiro_cliente >= 11000 && dinheiro_cliente < 25000 ) {
			if (dinheiro_cliente == 11000 ) {
				printf("Você receberá um computador ExtraPowerUltraMega mais barato no valor de R$ 11000 reais\n");
			}
			else {
			printf("Você receberá um computador ExtraPowerUltraMega mais barato no valor de R$ 110000 reais\n");
			printf("Troco: R$ %.2f\n", dinheiro_cliente - preco_powerultra1);
			}
		}
		else if (dinheiro_cliente >= 25000 ) {
			if (dinheiro_cliente == 25000 ) {
				printf("Você receberá um computador ExtraPowerUltraMega mais caro no valor de R$ 25000 reais\n");
			}
			else {
			printf("Você receberá um computador ExtraPowerUltraMega mais caro no valor de R$ 250000 reais\n");
			printf("Troco: R$ %.2f\n", dinheiro_cliente - preco_powerultra2);
			}
		}
	}
	
}