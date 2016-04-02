#include <stdio.h>  //Cabeçalho padrão de entrada/saída
#include <string.h> //manipulação de strings e arrays
 
 

//função principal 
int main() {
    //Declaração das variaveis que vão receber os valores inseridos pelo usuário
    int idade, numero_entrevistas;
    char estado_civil;

    //Variáveis que vão sevir como contadore   
    int casados = 0;  //Contador para o númer de casados na entrevista
    int solteiros = 0;  //Contador para o numero de solteiros na entrevista
    int divorciados = 0;  //Contador para o número de divorciados na entrevista
    int novos_viuvos = 0;  //Contador para o numero de viúvos que além de viúvos possuem idade < 40 anos
    float media = 0; //Armazena a soma das idades de todos os participantes para cálculo de média
    int numero_entrevistado = 1; //Contador do número do participante a ser entrevistado(1, 2, 3,...)
   
   
    //Imprimi um cabelo e pergunta quantas pessoas serão entrevistadas
    printf("\n\n*****************************************************\n");
    printf("                     PESQUISA                        \n");
    printf("*****************************************************\n");
    printf("Quantas entrevistas serao realizadas: ");
    scanf("%d", &numero_entrevistas);   //Armazena o valor inserido pelo usuário na variavel numero_entrevistas
    
   
   
    //Inicia um loop que começa em 1 e vai até o numero inserido pelo usuário para o total de entrevistas
    for (int i = 1; i <= numero_entrevistas; i++) {

        //Imprime um cabeçalho informando o número da entrevista
        //Explica o usário como informar o seu estado civil 
        //Armazena o valor inserido na variado estado_civil
        printf("\n\n*****************************************************\n");
        printf("                PARTICIPANTE NUMERO: %d                 \n", numero_entrevistado);
        printf("*****************************************************\n");
        printf("                    ESTADO CIVIL                      \n");
        printf("*****************************************************\n");
        printf("Digite a letra que corresponde seu estado civil: \n");
        printf("S - Solteiro\n");
        printf("C - Casado\n");
        printf("V - Viuvo\n");
        printf("D - Divorciado\n");
        printf("******************************************************\n");
        printf("Digite o numero correspondente: ");
        scanf(" %c", &estado_civil);
       

        //Se a letra inserida pelo usuário for 'S' ou 's' adiciona 1 à variável contador solteiros
        //Fazendo assim, garante que o problema continue indepente do usúário usar maiúscula ou minúscula
        if (estado_civil == 'S' || estado_civil == 's') {
            solteiros++;
        }
        //Se a letra inserida pelo usuário for 'C' ou 'c' adiciona 1 à variável contador casados
        else if (estado_civil == 'C' || estado_civil == 'c') {
            casados++;
        }
        //Se a letra inserida pelo usuário for 'D' ou 'd' adiciona 1 à variável contador divorciados
        else if (estado_civil == 'D' || estado_civil == 'd') {
            divorciados++;
        }
        
       
        //Imprime um novo cabeçalho para a idade
        //Pergunta a idade do entrevistado
        //Armazena o valor inserido pelo usuário na variável idade
        printf("\n\n******************************************************\n");
        printf("                      IDADE                           \n");
        printf("******************************************************\n");
        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        //Adiciona a idade inserida pelo usúario a varivel media
        //O cálculo realizado aqui é media = valor_atual + novo_valor e assim sucessivamente até o fim do loop
        media += idade;

        /*
        Se o valor armazenado na variável idade e o valor armazenado na variável estado_civil forem
        ao mesmo tempo verdadeiras para idade menor 40  E  estado civil igual ao caractere V
        ou ainda os valores armazenados nas variáveis forem ao mesmo tempo verdadeiras para 
         idade < 40 E estado_civil igual ao caractere v(minúsculo), entao
        adicina 1 ao valor da variável contador novos_viuvos que conta a quantidade de parcipantes
        que são ao mesmo tempo viúvos e possuem idade inferior a 40
        */
        if (idade < 40 && estado_civil == 'V' || idade <40 && estado_civil == 'v') {
            novos_viuvos++;
        }
        //Adiciona 1 a variável que conta o numero do participante sendo entrevistado
        numero_entrevistado++;       

        //Imprime na tela duas linhas horizontais apenas para facilitar a visualização
        printf("\n\n---------------------------------------------------------------\n");
        printf("---------------------------------------------------------------\n\n");
       
       
           
    }
   
    //Imprime na tela um cabeçalho para os resultados
    //Imprime o número de entrevistas realizadas no total
    //Imprime o numero de participantes que são casados
    //Imprime o número de participantes que são solteiros
    //Imprime o número de participantes que são divorciados
    //Imprime o número de participantes que são viúvos e possuem idade inferior a 40
    /*
    Imprime a média de idade dos participantes sendo esta divisão entre a soma de todas as idades
    pelo número de entrevistas realizadas
    */
    printf("\n\n******************************\n");
    printf("       RESULTADOS                  \n");
    printf("*************************************\n");
    printf("%d pessoa(as) foram entrevistadas\n", numero_entrevistas);
    printf("%d e/sao casado(os)\n", casados);
    printf("%d e/sao solteiro(os)\n", solteiros);
    printf("%d e/sao divorciados\n", divorciados);
    printf("%d e/sao viuvo(os) e tem idade menor do que 40 anos\n", novos_viuvos);
    printf("A media de idade dos participantes e %.2f\n", (media/numero_entrevistas));
    printf("****************************************************\n\n");
   
}