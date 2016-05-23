#include <stdio.h>



int main(){
	
	int numeros[10], pares = 0, impares = 0, positivo = 0, negativo = 0;
	
	for (int i = 0; i < 10; i++) {
		printf("Informe o numero: ");
		scanf("%d", &numeros[i]);
	}
	 
	for(int w = 0; w < 10; w++){
		if( numeros[w]  % 2 == 0 ) {
			pares++;
		}	
		else {
			impares++;
		}
		
		if (numeros[w] > 0) {
			positivo++;
		}
		else {
			negativo++;
		}
	}
	
	printf("%d pares\n", pares);
	printf("%d impares\n", impares);
	printf("%d positivos\n", positivo);
	printf("%d negativo\n", negativo);
	
}
