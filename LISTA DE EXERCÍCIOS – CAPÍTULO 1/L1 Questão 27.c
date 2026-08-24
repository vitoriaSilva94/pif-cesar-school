
#include <stdio.h>
int main (){

    int numero;


    printf("Digite a quantidade de segundos:\n");
    scanf("%d",&numero);

    int minutos = numero/60;
    int horas = minutos/60;
    int restoMinutos = minutos%60;
    int restoSegundos = numero%60;

    printf("%d segundos é igual a %d horas, %d minutos e %d segundos.\n",numero ,horas ,restoMinutos ,restoSegundos);

    return 0;    
}