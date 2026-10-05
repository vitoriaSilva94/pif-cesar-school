/*Questão 10. Resto da Divisão (`%`) e Decomposição do Tempo — Desenvolva um programa em C
que receba uma quantidade inteira de segundos informada pelo usuário. 
O programa deve calcular e exibir o tempo equivalente decomposto em Horas, Minutos e Segundos restantes 
(Exemplo: 3665 segundos correspondem a 1 hora, 1 minuto e 5 segundos).*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{

int segundos;

printf("Digite a quantidade de segundos que quer converter:");
scanf("%d",& segundos);

int horas = segundos / 3600;
int minutos = (segundos % 3600)/60;
int segundos2 = segundos%60;

printf("%d é igual a %d horas, %d minutos e %d segundos.\n",segundos ,horas ,minutos ,segundos2);

return 0;
}


