/*Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas — Historicamente,

literaturas de C utilizam funções unbuffered de entrada definidas na biblioteca legada e não-
padrão <conio.h>, tais como getch() e getche(), para ler caracteres imediatamente sem exigir que o
usuário pressione [ENTER]. 

Sob a perspectiva da portabilidade moderna da linguagem e do padrão
ANSI C:

a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos
(Linux, macOS, servidores)?  

<conio.h> não pertence à biblioteca padrão da linguagem C. 
Funções como getch() e getche() dependem da implementação e podem não estar disponíveis 
em sistemas como Linux e macOS.

b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h>
para entrada e saída de caracteres?

getchar() e putchar ()

c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira
robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.*/

#include <stdio.h>
int main () 
{
    char letra;
    getchar ();
    caractere = getchar ();
    printf("O caractere diitado foi: %c\n",letra);
return 0;
}