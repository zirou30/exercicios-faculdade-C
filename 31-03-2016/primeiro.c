#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int range) {
  int num;
  num = rand() % range;
  return num;
}

int main(){
  int nivel_reservatorio;
  int numero_teste = 1;

  for (int i = 1; i <= 10; i++) {
  	nivel_reservatorio = aleatorio(11);

  	if (nivel_reservatorio == 0) {
  		printf("*****************************************\n");
  		printf("*              RELATÓRIO                *\n");
  		printf("*****************************************\n");
  		printf("Teste número: %d\n", numero_teste);
  		printf("Nivel do reservatório: %d\n", nivel_reservatorio);
  		printf("Resultado: O reservatório esta VAZIO\n");
  		printf("*****************************************\n\n\n");
  	}
  	else if (nivel_reservatorio >= 1 && nivel_reservatorio <= 9) {
  		printf("*****************************************\n");
  		printf("*              RELATÓRIO                *\n");
  		printf("*****************************************\n");
  		printf("Teste número: %d\n", numero_teste);
  		printf("Nivel do reservatório: %d\n", nivel_reservatorio);
  		printf("Resultado: O reservatório esta OK\n");
  		printf("*****************************************\n\n\n");
  	}
  	else {
  		printf("*****************************************\n");
  		printf("*              RELATÓRIO                *\n");
  		printf("*****************************************\n");
  		printf("Teste número: %d\n", numero_teste);
  		printf("Nivel do reservatório: %d\n", nivel_reservatorio);
  		printf("Resultado: O reservatório esta CHEIO\n");
  		printf("*****************************************\n\n\n");
  	}
  	numero_teste++;
  	}
  }

