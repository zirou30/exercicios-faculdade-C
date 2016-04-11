/*
QUESTÃO 02 (3pts) – Elabore um programa em C para ler a velocidade máxima permitida em
uma avenida e a velocidade com que o motorista estava dirigindo nela e calcule a multa que uma
pessoa vai receber, sabendo que são pagos:
a) 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida;
b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida.
c) 200 reais, se estiver acima de 31km/h da velocidade permitida.
*/


#include <stdio.h> //Cabeçalho padrão de entrada/saída 
 
int main() {

	int velocidade_permitida, velocidade_motorista, diferenca_velocidade;

	printf("Informe a velocidade máxima permitada nessa avenida em KM/h: ");
	scanf("%d", &velocidade_permitida);

	printf("inf dorme a velocidade com que o motorista estava dirigindo em KM/h: ");
	scanf("%d", &velocidade_motorista);


 	diferenca_velocidade = velocidade_motorista - velocidade_permitida;

 	if (diferenca_velocidade == 0 || diferenca_velocidade < 0) {
 		printf("O motorista não execedeu o limite de velocidade e por isso não será multado.\n");
 	}
 	else if (diferenca_velocidade >= 1 && diferenca_velocidade <= 10) {
 		printf("O motorista será multado em R$ 50,00.\n");
 	}
 	else if (diferenca_velocidade >= 11 && diferenca_velocidade <= 30) {
 		printf("O motorista será multado em R$ 100,00.\n");
 	}
 	else if (diferenca_velocidade >= 31) {
 		printf("O motorista será multado em R$ 200,00.\n");
 	}		
}