
#include <stdio.h>
#include <stdlib.h>

int vetor1[10], vetor2[10];

void intercala() {
	for (int i = 0; i < 10; i++) {
		printf("%d %d ", vetor1[i], vetor2[i]);
	}
}

int main() {



	printf("\n                  **********  MATRIZ_1  **********\n\n");


	for (int i = 0; i < 10; i++) {
		printf("Informe um valor para a posicao %d: ", i);
		scanf("%d", &vetor1[i]);
	}

	printf("\n                  **********  MATRIZ_2  **********\n\n");

	for (int w = 0; w < 10; w++) {
		printf("Informe um valor para a posicao %d: ", w);
		scanf("%d", &vetor2[w]);
	}


	intercala();

	printf("\n");


}