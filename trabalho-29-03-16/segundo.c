#include <stdio.h>  



// LUIZ FILIPE VIRTUOSO
// HUDSON COSME FERREIRA
// SISTEMAS DE INFORMAÇÃO - 2 periodo


int main() {
  float nota1, nota2, nota3, media, maior, meio;
  int total_faltas;
  int chave1 = 1;
  int chave2 = 1;
  int chave3 = 1;
  int chave4 = 1;
  int chave5 = 1;

printf("\n*************************************\n");
printf("----------MÉDIA ESCOLAR--------------\n");
printf("*************************************\n"); 
printf("\n");                                                                 
                                                                 


//VERIFICA O NUMERO DE FALTAS
  while(chave1) {
    printf("Digite o número de faltas: ");
    scanf("%d", &total_faltas);

    if (total_faltas < 0 || total_faltas > 40) {
  		printf("Você não digitou um valor válido\n");
  	}
  	else if (total_faltas > 10 && total_faltas <= 40) {
  		printf("O aluno foi REPROVADO por faltas\n");
  		chave2 = 0;
  		chave3 = 0;
  		chave4 = 0;
  		chave5 = 0;
  		break;
  	}
  	else {
  		break;
  	}
  }

 
//SOLICITA E VERIFICA A PRIMEIRA NOTA
  while(chave2) {
 	  printf("Digite a primeira nota: ");
      scanf("%f", &nota1);
    

      if (nota1 < 0 || nota1 > 10.0) {
  	    printf("Você não digitou uma nota válida\n");
      }
      else {
      	break;
      }
  }

//SOLICITA E VERIFICA A SEGUNDA NOTA
  while(chave3) {

      printf("Digite a segunda nota: ");
      scanf("%f", &nota2);
      
      if (nota2 < 0 || nota2 > 10.0) {
  	  printf("Você não digitou uma nota válida\n");
  	  }
  	  else {
        break;
  	  }
    }

//SOLICITA E VERIFICA A TERCEIRA NOTA
  while(chave4) {
      printf("Digite a terceira nota: ");
      scanf("%f", &nota3);

      if (nota3 < 0 || nota3 > 10.0) {
  	    printf("Você não digitou uma nota válida\n");
      }
      else {
      	break;
      }
  }

// Verifica qual são as duas maiores e apresenta o resultado da media juntamente com a situação do aluno
if(chave5 == 1) {
  if (nota1 >= nota2) {
  	if (nota2 >= nota3) {
  	  media = (nota1 + nota2)/2;
      printf("A media entre %.1f e %.1f é %.1f\n", nota1, nota2, media);
      if (media >= 6.0) {
      	printf("O aluno foi APROVADO\n");
      }
      else {
      	printf("O aluno foi REPROVADO\n");
      }
  	}
  	else {
  	  media = (nota1 + nota3)/2;
  	  printf("A media entre %.1f e %.1f é %.1f\n", nota1, nota3, media);
  	  if (media >= 6.0) {
      	printf("O aluno foi APROVADO\n");
      }
      else {
      	printf("O aluno foi REPROVADO\n");
      }
  	}
  }
  else if (nota1 >= nota3) {
  	media = (nota2 + nota1)/2;
  	printf("A media entre %.1f e %.1f é %.1f\n", nota2, nota1, media);
    if (media >= 6.0) {
      printf("O aluno foi APROVADO\n");
    }
    else {
      printf("O aluno foi REPROVADO\n");
    }
  }
  else {
  	media = (nota2 + nota3)/2;
  	printf("A media entre %.1f e %.1f é %.1f\n", nota2, nota3, media);
  	if (media >= 6.0) {
      printf("O aluno foi APROVADO\n");
    }
    else {
      printf("O aluno foi REPROVADO\n");
    }  
  }
}
}