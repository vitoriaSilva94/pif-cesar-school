Questão 01. Diferenças Fundamentais e Tempo de Avaliação de Laços — A linguagem C
disponibiliza três estruturas de controle para execução iterativa de código: for, while e do-while.
Analise o funcionamento dessas estruturas e responda:

a) No while, a condição é testada antes de cada execução do bloco. Se ela for falsa logo na primeira avaliação, o bloco não executa nenhuma vez (mínimo de 0 execuções). No do-while, o bloco é executado primeiro e a condição é testada depois. Por isso o bloco executa pelo menos uma vez (mínimo de 1 execução), mesmo que a condição seja falsa desde o início.

b) O for é a escolha mais adequada quando o número de repetições é conhecido ou controlado por um contador, pois inicialização, teste e incremento ficam reunidos no cabeçalho (percorrer de 1 a N, percorrer vetores, tabelas, padrões com laços aninhados).
O while é a mais adequada quando o número de repetições não é conhecido de antemão e o laço pode não executar nenhuma vez, repetindo enquanto uma condição for verdadeira (leitura até um valor sentinela, algoritmos como inversão de dígitos).
O do-while é a mais adequada quando o bloco precisa executar ao menos uma vez antes de qualquer teste, como na validação de entrada de dados e em menus que se repetem até o usuário escolher sair.

c) Não é erro de compilação, é um erro de lógica. O código é sintaticamente válido: o ponto-e-vírgula é interpretado como uma instrução vazia, que passa a ser o corpo do laço. Se condicao for verdadeira e nada dentro do teste a modificar, o programa repete indefinidamente a instrução vazia, avaliando a mesma condição verdadeira a cada volta, e fica preso em um laço infinito. O que estava escrito logo abaixo do while deixa de ser o corpo do laço e passa a ser executado apenas depois que o laço terminar (o que nunca acontece). O laço só termina se a própria condição alterar seu valor (por exemplo, while (x++ < 5);).


Questão 02. Escopo e Tempo de Vida de Variáveis de Bloco — Um estudante escreveu o
programa abaixo com o intuito de calcular a soma dos quadrados dos números inteiros de 1 a 9,
mas encontrou falhas durante a compilação e execução:
#include <stdio.h>
a) A variável soma foi declarada dentro do bloco do for. Seu escopo é limitado a esse bloco, então ela não existe mais quando o printf final é executado, fora do laço. O compilador emite erro de que soma não foi declarada naquele ponto ('soma' undeclared).

b) Porque int soma = 0; está dentro do bloco, a variável é criada e inicializada com 0 a cada iteração e destruída ao final dela. Assim, soma += i * i sempre resulta em apenas i * i daquela iteração (1, 4, 9, 16, ...) e nunca acumula o valor das iterações anteriores.

c) 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;
    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

A saída é: Soma final = 285

Conceitos:
Visibilidade (escopo): é a região do programa em que um nome de variável pode ser usado. Em C, uma variável declarada dentro de um bloco { } só é visível dentro desse bloco (e nos blocos internos a ele). Uma variável declarada fora de qualquer bloco de função é global e visível no arquivo todo a partir da declaração.
Escopo de bloco: cada par de chaves cria um novo escopo. Variáveis declaradas dentro dele são locais ao bloco e não podem ser acessadas fora dele.
Tempo de vida: é o período em que a variável ocupa memória. Uma variável local de bloco é criada quando a execução entra no bloco e destruída quando sai dele; a cada nova entrada no bloco (como a cada iteração do laço), ela é criada de novo e reinicializada. Por isso o acumulador deve ser declarado e inicializado antes do laço, em um escopo que dure o laço inteiro.


Questão 03. 
a) A cada volta, a é dividido por 2 (divisão inteira) até chegar a 0: 36, 18, 9, 4, 2, 1. A saída, separada por tabulações, é:

36	18	9	4	2	1

(Depois do 1, a /= 2 resulta em 0 e o teste a > 0 falha.)

b) O Trecho B lê caracteres do teclado com getch() (sem exibir o que foi digitado e sem esperar Enter) e atribui o resultado a ch. Enquanto o caractere lido for diferente de 'X', ele imprime o caractere seguinte na tabela ASCII, porque ch + 1 soma 1 ao código do caractere (digitando a imprime b, digitando B imprime C). Quando o usuário digita X, o laço termina. As expressões de inicialização e de incremento foram omitidas porque não são necessárias: a leitura e o teste estão na própria condição.

Os parênteses em (ch = getch()) são necessários por causa da precedência: o operador != tem precedência maior que o operador de atribuição =. Sem os parênteses, ch = getch() != 'X' seria avaliado como ch = (getch() != 'X'), e ch receberia apenas 0 ou 1 (o resultado da comparação) em vez do caractere lido.

c) O laço infinito pode ser interrompido de dentro do programa com:
break, dentro de uma condição if (por exemplo, quando o usuário digita um valor de saída);
return, que encerra a função em que o laço está (em main, encerra o programa);
exit(), da stdlib.h, que encerra o programa inteiro.


Questão 04. 
a) Quando break é executado dentro de um for ou while, o laço é encerrado imediatamente, sem testar a condição novamente e sem terminar o restante do bloco. A execução continua na primeira instrução depois do laço.

b) Quando continue é executado dentro de um for, o restante do corpo do laço, daquela iteração, é ignorado e o programa passa direto para a próxima iteração. No for, a expressão executada imediatamente após o continue é a expressão de incremento (a terceira do cabeçalho), e só depois é feito o teste da condição.

c) Apenas o laço interno, aquele que contém o break. O laço externo continua normalmente e prossegue para sua próxima iteração.

Questão 05. 
a) O laço executará 5 iterações. Os valores iniciais são i = 0 e j = 10. A cada volta, i aumenta 1 e j diminui 1, e o laço termina quando i < j deixa de ser verdadeiro. Isso acontece quando i = 5 e j = 5.

b) Saída produzida pelo printf em cada iteração:

i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c) Versão com while:

int i, j;
i = 0;
j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}

Questão 06. 
a) O valor impresso é: Valor final de x = 6

b) Em x++ < 5, o incremento é pós-fixado: primeiro x é comparado com 5 usando o valor atual, e só depois é incrementado (a comparação acontece com o valor antigo, e o incremento ocorre mesmo quando o resultado é falso). Passo a passo:

1º teste: x vale 0, compara 0 < 5 (verdadeiro), depois x passa a 1.
2º teste: x vale 1, compara 1 < 5 (verdadeiro), depois x passa a 2.
3º teste: x vale 2, compara 2 < 5 (verdadeiro), depois x passa a 3.
4º teste: x vale 3, compara 3 < 5 (verdadeiro), depois x passa a 4.
5º teste: x vale 4, compara 4 < 5 (verdadeiro), depois x passa a 5.
6º teste: x vale 5, compara 5 < 5 (falso), depois x passa a 6.

No 6º teste a condição é falsa e o laço termina, mas o x++ já foi executado, por isso x vale 6. O corpo é vazio (;), então não há mais nada a executar dentro do laço.

c) Versão explícita, com o mesmo resultado final:

int x = 0;
while (x <= 5) {
    x++;
}
printf("Valor final de x = %d\n", x);

Aqui o laço incrementa x enquanto ele for menor ou igual a 5, e para quando x chega a 6, resultando em: Valor final de x = 6