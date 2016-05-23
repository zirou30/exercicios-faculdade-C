#include <stdio.h>

int main() {
    int dia;
    int total_erros = 0;

    repeat:
    printf("Digite um número de 1 a 7 referente ao dia da semana: ");
    scanf("%d", &dia);


    if (dia == 1) {
        printf("Hoje é domingo\n");
    } 
    else if (dia == 2) {
        printf("Hoje é segunda feira\n");
    }
    else if (dia == 3) {
        printf("Hoje é terça feira\n");
    }
    else if (dia == 4) {
        printf("Hoje é quarta feira\n");
    }
    else if (dia == 5) {
        printf("Hoje é quinta feira\n");
    }
    else if (dia == 6) {
        printf("Hoje é sexta feira\n");
    }
    else if (dia == 7) {
        printf("Hoje é sábado\n");
    }
    else {
        printf("Você não digitou um numero válido\n");
        total_erros++;
        printf("%d\n", total_erros);
        if (total_erros >= 3) {
            goto fim;
        }

    }
    goto repeat;
    fim:
    printf("\n********************\n");
    printf("Você errou 3 vezes\n");
    printf("********************\n");

}