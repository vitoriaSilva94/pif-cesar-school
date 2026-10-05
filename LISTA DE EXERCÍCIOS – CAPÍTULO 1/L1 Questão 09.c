/*Determine a saída exata do programa a seguir e explique como o compilador C
interpreta os argumentos do tipo caractere simples ('\n', '\t', '\"') passados para o modificador %c:

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
system("PAUSE");
return 0;
O primeiro printf imprime uma linha em branco, um recuo e "Primeiro programa, com só a aspa de abertura. 
O %c imprime um único caractere, e '\n', '\t' e '\"' entre aspas simples são um caractere cada: a barra invertida faz parte da forma de escrever e não é impressa. 
O compilador troca cada %c, na ordem, pela quebra de linha, pela tabulação e pela aspa dupla. 
Como foi passada uma aspa só, ela abre mas não fecha. Não há \n no final, então o cursor fica logo depois do texto.
No segundo printf, "\"" está entre aspas duplas, então é um texto, e não um caractere. 
O %c espera um caractere (para um texto, o correto seria %s), e o compilador emite um aviso de formato incompatível. 
O que chega ao %c é o endereço de memória do texto, então o programa imprime um caractere imprevisível. 
É comportamento indefinido: o símbolo muda de máquina para máquina, e não dá para garantir a saída dessa linha. 
Para imprimir só uma aspa, bastaria usar '\"'.
O system("PAUSE") mostra a mensagem de pausa na mesma linha, colada no que foi impresso antes.
Saída (Windows), em que ? é o caractere imprevisível:

(linha em branco)
"Primeiro programa?Pressione qualquer tecla para continuar. . .

A diferença que importa é que aspas simples representam um caractere e aspas duplas representam um texto, e o %c só aceita o primeiro.

}*/
