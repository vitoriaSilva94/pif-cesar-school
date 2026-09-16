/* Questão 06. Comportamento e Precedência dos Incrementos — O comportamento de
incrementos prefixados e pós-fixados (++x e x++) é uma fonte frequente de erros sutis na
Linguagem C. Analise os dois trechos de código independentes abaixo e responda:
// Trecho A
int n = 5;
int x = ++n;
printf("Trecho A: n = %d, x = %d\n", n, x);
// Trecho B
int m = 5;
int y = m++;
printf("Trecho B: m = %d, y = %d\n", m, y);
a) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado (++n) e o
pós-fixado (m++). Quais serão os valores impressos na tela por cada trecho?

Trecho A: int n = 5; int x = ++n;
   → O operador prefixado (++n) PRIMEIRO incrementa n, DEPOIS usa o valor.
   → n passa a valer 6, e x recebe 6.
   → Saída: "Trecho A: n = 6, x = 6"

   Trecho B: int m = 5; int y = m++;
   → O operador pós-fixado (m++) PRIMEIRO usa o valor atual, DEPOIS incrementa m.
   → y recebe 5 (valor original), e m passa a valer 6.
   → Saída: "Trecho B: m = 6, y = 5"



b) Um programador júnior tentou imprimir uma variável em printf() modificando-a múltiplas
vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, n+1, n++);. Explique
por que essa instrução pode gerar resultados inconsistentes e imprevisíveis dependendo do
compilador adotado (comportamento indefinido). 

A instrução printf("%d\t%d\t%d\n", n, n+1, n++); gera comportamento indefinido
   (Undefined Behavior) porque a ordem de avaliação dos argumentos de uma função
   NÃO é garantida pelo padrão C. Cada compilador pode avaliar os argumentos da
   direita para a esquerda, da esquerda para a direita, ou em qualquer outra ordem.
   Como n++ modifica n enquanto ele também está sendo lido nos outros argumentos,
   o resultado depende do compilador — um comportamento que não pode ser previsto
   de forma portável. A boa prática é NUNCA modificar e ler a mesma variável
   na mesma expressão.


*/