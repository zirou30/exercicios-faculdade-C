#include <stdio.h>

int main() {
  //Declaraçao das variáveis
  float distancia_percorrida, combustivel_total, gasto_medio;


  ////Socilita e armazena valores paras as variaveis distancia _percorrida e combustivel_total
  printf("Digite a distância total percorrida em KM: ");
  scanf("%f", &distancia_percorrida);

  printf("Digite o total gasto de combustivel em litros: ");
  scanf("%f", &combustivel_total);

  //Calcula o gasto médio de combustivel da viagem
  gasto_medio = distancia_percorrida / (double)combustivel_total;

  //Escreve na tela o resultado
  printf("O gasto médio de combustivel nesse percuso foi de %.2f\n", gasto_medio);
}