#include <stdio.h>


int main() {
	int numeros[5], numero;

	for (int i = 0; i < 5; i++) {
		printf("Informe um numero: ");
		scanf("%d", &numeros[i]);
	}

	for (int i = 4; i >= 0; i--) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
}