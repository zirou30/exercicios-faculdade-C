/*
QUESTÃO 05 (3pts) – Uma loja de automóveis que possui várias salas separou seus automóveis
por Marca nestas salas com o objetivo de facilitar a busca e não misturar os automóveis de marca
diferentes. Esta loja vende automóveis das marcas: Ferrari, Mustang, Porche e BMW. Os
automóveis estão distribuídos da seguinte forma:

Ferrari nas salas: 1, 2, 3, 4, e 5
Mustang nas salas 6, 7, 8, e 9
Porche nas salas 10, 15 e 17
BMW nas salas 11, 12, 13, 14 e 16

Elabore um programa em C para ler o número desta sala e informar que marca de veículo está
guardada nela. Caso seja informada uma sala que não tem veículo, envie uma mensagem
informando que não tem veículo nesta sala.
*/


#include <stdio.h> //Cabeçalho padrão de entrada/saída 
 
int main() {

	int numero_sala;


	printf("Informe o número da sala que deseja verificar: ");
	scanf("%dnumero_sala", &numero_sala);

	if (numero_sala == 1 || numero_sala == 2 || numero_sala == 3 || numero_sala == 4 || numero_sala == 5 ) {
		printf("Nessa sala estão os veículos da marca Ferrari\n");
	}
	else if (numero_sala == 6 || numero_sala == 7 || numero_sala == 8 || numero_sala == 9) {
		printf("Nessa sala estão os veículos da marca Mustang\n");
	}
	else if (numero_sala == 10 || numero_sala == 15 || numero_sala == 17) {
		printf("Nessa sala estão os veículos da marca Porsche\n");
	}
	else if (numero_sala == 11 || numero_sala == 12 || numero_sala == 13 || numero_sala == 14 || numero_sala == 16) {
		printf("Nessa sala estão os veículos da marca BMW\n");
	}
	else {
		printf("Não estão sendos expostos veículos nesta sala\n");
	}
}