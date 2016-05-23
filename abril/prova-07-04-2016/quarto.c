/*
QUESTÃO 04 (3pts) – Elabore um programa em C para ler um número inteiro positivo,
representando segundos (de horas), e convertê-lo em um formato padrão de horas, expresso por
horas, minutos e segundos. Ex. se o número digitado for 4843, o algoritmo deve escrever: 4843
segundos representa 1 hora, 20 minutos e 43 segundos.
*/



#include <stdio.h> //Cabeçalho padrão de entrada/saída 
 
int main() {
	int segundos, minutos, horas, novos_segundos;

	printf("Digite o horário em segundos: ");
	scanf("%d", &segundos);

	horas = segundos / 3600;
	
	minutos = (segundos - (horas * 3600)) / 60;

	novos_segundos = segundos - (horas * 3600) - (minutos * 60);

	printf("%d segundos representam %d hora(s), %d minuto(s) e %d segundo(s)\n", segundos, horas, minutos, novos_segundos);
	
}