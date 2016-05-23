#include <stdio.h>
#include <stdlib.h>


int main() {

	char resposta, gabarito[30], cartao_resp[30];
	int acertos = 0, alunos;


	for (int w = 0; w < 30; w++) {

		float aleat = rand() % 100;
		
		if (aleat > 0 && aleat <= 20) {
			gabarito[w] = 'A';
		}
		else if (aleat > 20 && aleat <= 40) {
			gabarito[w] = 'B';
		}
		else if (aleat > 40 && aleat <= 60) {
			gabarito[w] = 'C';
		}
		else if (aleat > 60 && aleat <= 80) {
			gabarito[w] = 'D';
		}
		else if (aleat > 80 && aleat <= 100) {
			gabarito[w] = 'E';
		}
	}



	printf("Informe a quantidade de alunos: ");
	scanf("%d", &alunos);

	for (int z = 1; z <= alunos; z++) {
		for (int i = 0; i < 30; i++) {


			// mostra o numero da questao corretamente
			int numero_questao;

			if (i == 0) {
				numero_questao = 1;
			}
			else {
				numero_questao = i + 1;
			}
			// fim POG
			printf("\n\n-----------------  CARTAO RESPOSTA %d  --------------\n", z);
			printf("***************************************\n");
			printf("----------------QUESTÃO %d\n", numero_questao); 
			printf("Informe sua resposta( A, B, C ou D ): ");
			scanf(" %c", &resposta);

			cartao_resp[i] = resposta;
		}



		for (int q = 0; q < 30; q++) {
			if (cartao_resp[q] == gabarito[q]) {
				acertos++;
			}
		}

 
		printf("\n\n");
		printf("\n------------ Numero do aluno: %d ----------------\n", z);
		printf("-------------------- GABARITO ---------------------\n");
		for (int cont = 0; cont < 30; cont++) {
			printf("%c ", gabarito[cont]);
		}
		
		printf("\n--------------------- ACERTOS ---------------------\n");
		printf("\nAcertou %d vezes\n", acertos);

		printf("\n--------------------- CARTAO RESPOSTA -------------\n");
		for (int y = 0; y < 30; y++) {
			printf("%c ", cartao_resp[y]);
		}
		printf("\n\n");
	}
}