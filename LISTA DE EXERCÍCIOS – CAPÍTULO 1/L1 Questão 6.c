/* Identifique e liste todos os erros de sintaxe (que violam as regras da linguagem C) e de
lógica contidos no programa abaixo:

main()
{
int a=1; b=2; c=3:
printf("0s números são: %d%d%d\n, a, b, c, d);
system("pause");
}*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
int a=1; 
int b=2;
int c=3;

printf("0s números são: %d %d %d %d\n", a, b, c);

system("PAUSE");
return 0;
}