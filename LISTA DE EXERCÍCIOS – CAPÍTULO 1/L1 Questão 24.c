/*Desenvolva um programa em C que organize dados de notas escolares em uma tabela
no console. Seu programa deve usar especificadores de formato e largura de campos para que as
colunas fiquem perfeitamente alinhadas, gerando a saída mostrada abaixo:

ALUNO(A) NOTA
========= =====
ALINE 9.0*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota = 9.0;

    printf("%-9s %5s\n", "ALUNO(A)", "NOTA");
    printf("%-9s %5s\n", "=========", "=====");
    printf("%-9s %5.1f\n", "ALINE", nota);

    system("PAUSE");
    return 0;
}
