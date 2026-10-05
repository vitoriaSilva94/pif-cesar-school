/*Explique detalhadamente o comportamento do programa abaixo quando 
executado no console. Apresente qual será a saída exata gerada pelas
 sequências de escape utilizadas no formato de controle:

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("\n\t\"Primeiro programa\"");
system("PAUSE");
return 0;
}
O programa imprime uma linha em branco, um recuo e o texto "Primeiro programa" entre aspas. 
Depois executa a pausa, cuja mensagem aparece na mesma linha do texto.
O `\n` leva o cursor para uma nova linha antes de escrever, 
o que gera a linha em branco no topo. O `\t` é a tabulação: avança o cursor até a próxima parada de tabulação (cerca de 8 colunas) e cria o recuo. 
O `\"` faz as aspas duplas serem impressas como caractere, sem encerrar o texto do printf.
O texto não termina com `\n`, então o cursor fica logo depois da aspa final. 
O `system("PAUSE")` mostra a mensagem de pausa e espera uma tecla, e essa mensagem aparece colada no texto. 
Só depois da tecla o `return 0` encerra o programa sem erros.
Saída exata no console (Windows):

(linha em branco)
        "Primeiro programa" Pressione qualquer tecla para continuar. . .

Em Linux ou Mac, o comando PAUSE não existe, e o sistema mostra uma mensagem de erro no lugar da pausa.
*/
