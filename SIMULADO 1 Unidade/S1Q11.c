/*Questão 11. Cálculo Salarial com Gratificação e Impostos — Uma empresa contrata um técnico a R$
45,00 por dia trabalhado. Crie um programa em C que solicite o número de dias trabalhados, 
calcule o salário bruto, 
adicione uma gratificação de 5% sobre o bruto 
e desconte 8% de imposto de renda sobre o bruto. 
Ao final, exiba o holerite detalhado com o valor líquido a receber.*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
int dias;

printf("Digite o número de dias trabalhados:\n");
scanf("%d",&dias);

float bruto = dias * 45.00;
float gratificacao = (8 * bruto)/100;
float imposto = (5*bruto)/100;
float liquido = (bruto + gratificacao) - imposto;

printf("Salário bruto: %.2f\nGratificação: %.2f\nImposto(desconto): %.2f\nTotal líquido: %.2f",bruto ,gratificacao ,imposto ,liquido);


return 0;
}

