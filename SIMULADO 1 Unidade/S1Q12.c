/*Questão 12. Validação de Entrada de Dados com Laço Garantido (`do-while`) —
 Escreva um programa em C que solicite ao usuário uma nota válida no intervalo fechado de 0.0 a 10.0. 
 Caso o usuário digite um valor inválido (como -2.5 ou 11.0), o programa deve exibir uma mensagem de erro e
repetir a solicitação utilizando a estrutura `do-while`. 
O programa só deve encerrar quando uma nota válida for digitada.*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float nota;

        do {
            printf("Digite sua nota:\n");
            scanf("%.f", &nota);
            if (nota<0 || nota>10) 
                printf("Número inválido: tente novamente.");
            
        } while (nota<0 || nota>10);



        printf("Sua nota é válida!");
        
    return 0;
}

