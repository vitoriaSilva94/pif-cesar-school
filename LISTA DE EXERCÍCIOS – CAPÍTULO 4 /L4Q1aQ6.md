Questão 01. Avaliação de Expressões Condicionais e Atribuição vs. Igualdade

a) Escrever if (x = 0) em vez de if (x == 0) troca a comparação por uma atribuição. O valor 0 é copiado para x (x passa a valer 0, perdendo o valor que tinha) e o valor da expressão de atribuição é o próprio valor atribuído, ou seja, 0. Como 0 é interpretado como falso, o bloco do if nunca é executado (se houver else, é o else que roda). O compilador normalmente só emite um aviso, porque o código é válido, e por isso esse é um erro de lógica muito comum.

b) Em C não existe um tipo lógico no padrão ANSI C (C89): qualquer expressão numérica (inteira ou real) pode ser usada como condição. O valor 0 (ou 0.0) significa FALSO, e qualquer valor diferente de zero (positivo ou negativo) significa VERDADEIRO. Os operadores relacionais e lógicos (>, ==, &&, !, ...) produzem 1 quando verdadeiros e 0 quando falsos.

c) O bloco será EXECUTADO. A instrução if (x = -5) atribui -5 a x e o valor da expressão é -5. Como o padrão ANSI C define que a condição do if é verdadeira quando o valor da expressão é diferente de zero, e -5 é diferente de zero, o teste é verdadeiro. Ao final, x vale -5.



Questão 02. Associação do Comando else e Aninhamento de Decisões

int x = 15, y = 5;
if (x > 10)
    if (y > 10)
        printf("Opção A\n");
else
    printf("Opção B\n");

a) Será impressa a mensagem: Opção B. Embora a indentação sugira que o else pertence ao primeiro if (x > 10), o compilador ignora a indentação. O else pertence ao if (y > 10). Como x > 10 é verdadeiro, o if interno é avaliado; y > 10 é falso (5 não é maior que 10), então o else associado a ele é executado e imprime "Opção B".

b) Regra oficial: em código sem chaves, o else sempre se associa ao if mais próximo que ainda não possui else (o último if "aberto" antes dele).

c) Com chaves, a associação fica explícita e a Opção B só é impressa quando x <= 10:

int x = 15, y = 5;
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}

Com x = 15 e y = 5, nada é impresso nessa versão.



Questão 03. Operador Condicional Ternário vs. Estrutura if-else

media = (nota1 + nota2) / 2.0;
situacao = (media >= 7.0) ? 'A' : 'R';

a) O operador ternário (condição ? valor_se_verdadeiro : valor_se_falso) avalia primeiro a condição (media >= 7.0). Se ela for verdadeira, a expressão inteira vale 'A'; se for falsa, vale 'R'. Esse resultado é então atribuído à variável situacao. Para media = 6.8, a condição 6.8 >= 7.0 é falsa, portanto situacao recebe 'R' (reprovado).

b) Versão com if-else:

media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}

c) Não. O ternário é uma EXPRESSÃO que produz um valor, enquanto o if-else é um COMANDO. Cada ramo do ternário precisa ser uma expressão única que resulte em um valor; ele não comporta blocos com vários comandos, declarações de variáveis, laços ou chamadas de comandos como return/break. Quando cada ramo precisa executar vários comandos (por exemplo, vários printf e atribuições), é necessário usar if-else com chaves. O ternário é indicado apenas para escolher entre dois valores de forma simples e curta.



Questão 04. Seleção Múltipla com switch-case e Efeito Fall-Through

a) Saída exata:

Prata
Ouro

Como codigo vale 2, a execução entra em case 2 e imprime "Prata". Esse case não tem break, então a execução continua (cai) para o case 3, imprime "Ouro" e só para ao encontrar o break. O case 1 e o default não são executados.

b) O break encerra o switch imediatamente e desvia a execução para depois do bloco, impedindo que os cases seguintes sejam executados. Quando ele é omitido, ocorre o efeito fall-through (execução em cascata): a execução continua nos cases seguintes até encontrar um break ou o fim do switch.

c) A expressão do switch deve ser de tipo inteiro: int, char, short, long (com ou sem sinal) e constantes de enumeração (enum). Os valores dos case devem ser constantes inteiras. Não é permitido usar float ou double, pois o padrão exige expressão de tipo inteiro; números reais têm representação aproximada e comparações de igualdade exata com eles não são confiáveis.



Questão 05. Avaliação de Curto-Circuito em Operadores Lógicos

int a = 0, b = 5, c = 10;
if (a != 0 && ++b > 5)
    c += 10;
else
    c -= 2;
printf("a = %d, b = %d, c = %d\n", a, b, c);

a) Saída: a = 0, b = 5, c = 8
Como a != 0 é falso (a vale 0), o operador && já sabe que o resultado será falso e NÃO avalia o lado direito. Portanto o incremento ++b foi ignorado e b continua valendo 5. Como a condição é falsa, o else é executado: c = 10 - 2 = 8.

b) Curto-circuito é a técnica em que a avaliação de uma expressão lógica para assim que o resultado já está determinado:
- Operador E (&&): se o primeiro operando é falso, o resultado é falso e o segundo operando não é avaliado. Só avalia o segundo se o primeiro for verdadeiro.
- Operador OU (||): se o primeiro operando é verdadeiro, o resultado é verdadeiro e o segundo operando não é avaliado. Só avalia o segundo se o primeiro for falso.

c) Com if (a == 0 || ++b > 5): a == 0 é verdadeiro, então o || já tem o resultado verdadeiro e ++b NÃO é executado. Assim b = 5 e, como a condição é verdadeira, c += 10 resulta em c = 20. Valores finais: b = 5 e c = 20.



Questão 06. Construções else-if e Análise Lógica de Intervalos

int idade = 25;
if (idade >= 60)
    printf("Idoso\n");
if (idade >= 18)
    printf("Adulto\n");
if (idade >= 12)
    printf("Jovem\n");
else
    printf("Criança\n");

a) Para idade = 65 a saída é:

Idoso
Adulto
Jovem

Isso acontece porque os três primeiros if são independentes e todos são avaliados: 65 >= 60, 65 >= 18 e 65 >= 12 são verdadeiros, então as três mensagens são impressas. O else pertence apenas ao último if.

b) Em uma sequência de ifs independentes, TODAS as condições são testadas, e várias podem ser executadas. Em uma cadeia else-if, as condições são testadas em ordem e, assim que uma é verdadeira, o seu bloco é executado e todas as demais alternativas são ignoradas; no máximo um bloco é executado.

c) Versão correta com else-if (das faixas maiores para as menores):

int idade = 25;
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
