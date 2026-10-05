/*Questão 13. Cálculo do Fatorial com Tratamento do Zero e Tipo `long long int` — 
Escreva um programa em C que solicite um número inteiro N e calcule o seu fatorial (N!).
Lembre-se que 0! = 1 e 1! = 1. 
O programa deve utilizar a variável do resultado como `long long int` com o especificador `%lld`
para evitar estouro de memória e tratar entradas inválidas (números negativos).*/

#include <stdio.h>
#include <stdlib.h>
int main () {

    int num;
    long long int fatorial = 1;

    printf("Digite um número inteiro positivo:\n");
    scanf("%d",&num);

   if (num < 0) {
        printf("Não existe fatorial de numero negativo.\nTente novamente.\n/");
   } else {
    for (int contador=1; contador<= num; contador++ ) {
        fatorial *= contador;
    }
    printf("%d! = %lld\n", num, fatorial);
   }

    return 0;
}





