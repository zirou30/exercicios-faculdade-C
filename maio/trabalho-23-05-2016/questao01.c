#include <stdio.h>


int main(){
	
	int numeros[20], maior = 0, igual = 0, menor = 0;
	
	
	
	for (int i = 0; i < 20; i++) {
		printf("Informe o numero %d: ", i);
		scanf("%d", &numeros[i]);		
	}
	
	for (int w = 1; w < 20; w++) {
		if (numeros[w] == numeros[0]){
			igual++;	
		}
		else if (numeros[w] > numeros[0]){
			maior++;
		}
		else if (numeros[w] < numeros[0]){
			menor++;
		}
	}
	
	printf("Existem %d numeros iguais, %d numeros maiores, %d numeros menores\n", igual,maior,menor);
	
}
