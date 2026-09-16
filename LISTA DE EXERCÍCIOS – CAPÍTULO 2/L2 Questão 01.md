Questão 01. Truncamento de Tipos e Coerção Implícita — Um estudante do curso de ADS
escreveu o programa em C abaixo visando entender o comportamento de variáveis e atribuições
de tipos incompatíveis. Analise o código, compile mentalmente ou em seu ambiente de
desenvolvimento e responda às questões indicadas.

#include <stdio.h>
#include <stdlib.h>
int main() {
int valor_inteiro;
valor_inteiro = 2.97;
printf("O valor armazenado eh: %d\n", valor_inteiro);
system("PAUSE");
return 0;
}

a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse
programa?
O valor é 2
b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?
O tipo de dado declarado foi "interger" que não permite casas decimais, apenas números inteiros.
a parte decimal é descartada. Acontece o "truncamento" da parte decimal.
c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo
programador caso ele necessite arredondar o valor ou manter a precisão?
para manter a precisão deve-se declarar a variável corretamente(como float ou double).
Também é possível usar casting para forçar o sistema a tratar o dado como um tipo específico 

