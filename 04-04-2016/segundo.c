#include <stdio.h>
 #include <stdlib.h>
 
int main(){
 float divida, juros, aplicacao, rendimento;
 int meses;
 meses = 0;
 divida = 10000;
 juros = 0.025;
 aplicacao = 1500;
 rendimento = 0.04;
 
while (divida > aplicacao) {
 divida = (divida * juros) + divida;
 aplicacao = (aplicacao * rendimento) + aplicacao;
 meses ++;
 }
 printf("Quantidade de meses para liquidar a divida e %d\n",meses);
 printf("Sua divida esta em %f\n",divida);
 printf("Sua aplicacao esta em %f\n", aplicacao);
 return 0;
 }