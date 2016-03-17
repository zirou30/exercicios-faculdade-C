#include <stdio.h>


int main() {
  //Declaração das variáveis
  float n1, n2, n3, n4, media;


  //Imprime nada tela um cabeçalho para o programa
  printf("***************************************\n");
  printf("     CALCULADOR DE MÉDIA ESCOLAR\n");
  printf("***************************************\n\n");

  //Solicita e armazena os valores das notas
  printf("Digite a nota da primeira etapa: ");
  scanf("%f", &n1);

  printf("Digite a nota da segunda etapa: ");
  scanf("%f", &n2);

  printf("Digite a nota da terceira etapa: ");
  scanf("%f", &n3);

  printf("Digite a nota da quarta etapa: ");
  scanf("%f", &n4);

  //Calcula a média com bases nas notas fornecidas
  media = (n1 + n2 + n3 + n4) / (float)4;

  //Verifica se o aluno foi ou não aprovado.
  if (media >= 60) {
  	printf("\nA média do aluno é %.2f\n", media);
  	printf("O aluno foi APROVADO\n");
  } 
  else {
  	printf("\nA média do aluno é %.2f\n", media);
  	printf("O aluno foi REPROVADO \n");
  }


  

}