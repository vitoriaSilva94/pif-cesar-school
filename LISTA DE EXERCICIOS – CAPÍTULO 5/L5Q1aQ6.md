QUESTAO 01

a) Protótipo: float celsius(float); fica antes da main(). Avisa ao compilador que existe uma função celsius, que recebe um float e devolve um float.

Chamada: c = celsius(f); dentro da main(). É o momento em que a função é executada: o valor de f é copiado para o parâmetro e o resultado devolvido é guardado em c.

Definição: float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; } fica depois da main(). É o corpo da função, onde está o código que realmente faz o cálculo.

b) O protótipo permite ao compilador conferir, em cada chamada, a quantidade e o tipo dos argumentos e o tipo do retorno, e converter o argumento para o tipo esperado. Sem o protótipo, com a função definida depois da main(), o compilador não conhece a função no momento da chamada. Em C antigo ele assume que a função devolve int e não confere os parâmetros (um float passaria como double, por exemplo), gerando resultado errado sem aviso. Nos compiladores modernos isso gera aviso ou erro.

c) O tipo da função celsius() é float. O tipo da função é o tipo do valor que ela devolve, porque é isso que define como a chamada pode ser usada numa expressão (c = celsius(f); precisa de um float). Os parâmetros só descrevem o que a função recebe; quem usa o resultado precisa saber o que sai dela.


QUESTAO 02

a) Uma função em C devolve apenas um valor com return. O programador queria devolver a soma e a média, mas "return soma, media;" usa o operador vírgula: avalia soma, descarta, e devolve só media. Ou seja, a soma se perde.

b) O "return;" encerra a função imediatamente, sem devolver valor, voltando ao ponto da chamada. Aqui, se erro < 0, a mensagem de erro é impressa e o printf seguinte não é executado. Numa função void o "return;" não é obrigatório no final: a função termina sozinha ao chegar na chave final. Ele só é necessário para sair antes do fim.

c)
float media3(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int soma3(int a, int b, int c) {
    return a + b + c;
}

Precisamos de duas funções porque o return devolve um único valor por chamada. (Para devolver dois resultados numa só função seria preciso outro recurso, como ponteiros, que ainda não vimos.)


QUESTAO 03

a)
exibe_mensagem: tem 1 parâmetro de entrada (uma string) e não tem valor de retorno.
obter_codigo: não tem parâmetros e retorna int.
limpar_tela: não tem parâmetros e não tem valor de retorno.

b) Função com retorno calcula e devolve um valor para quem chamou, que pode usá-lo numa expressão ou atribuição. Procedimento (void) só executa uma ação e não devolve nada. Exemplo para função com retorno: calcular a média de três notas (mediaPonderada), porque o resultado será usado depois. Exemplo para procedimento: exibir um menu (exibeMenu), porque a tarefa é só imprimir.

c) Não é válida. limpar_tela é void, ou seja, não devolve valor nenhum, então não há o que atribuir a x. O compilador acusa erro. A forma correta é só limpar_tela();


QUESTAO 04

a) Caso base: n == 0, que devolve 1. Passo recursivo: n * fatorial(n - 1). Sem o caso base, a função nunca pararia de se chamar: n ficaria negativo indefinidamente (recursão infinita) até estourar a pilha.

b) Rastreamento de fatorial(4).

Empilhamento (as chamadas ficam esperando):
fatorial(4) precisa de 4 * fatorial(3)
fatorial(3) precisa de 3 * fatorial(2)
fatorial(2) precisa de 2 * fatorial(1)
fatorial(1) precisa de 1 * fatorial(0)
fatorial(0) é o caso base: devolve 1

Desempilhamento (os valores voltam):
fatorial(0) devolve 1
fatorial(1) devolve 1 * 1 = 1
fatorial(2) devolve 2 * 1 = 2
fatorial(3) devolve 3 * 2 = 6
fatorial(4) devolve 4 * 6 = 24

Resultado: 24.

c) A cada chamada recursiva o programa cria, na pilha de execução, um novo quadro (espaço) com os parâmetros, as variáveis locais e o endereço de retorno daquela chamada. Os quadros ficam empilhados até o caso base ser atingido; aí começam a ser desempilhados, do último para o primeiro. Sem caso base, os quadros continuam sendo empilhados sem parar, a memória da pilha acaba (stack overflow) e o programa é encerrado com falha.


QUESTAO 05

a) As saídas são:
25
8

SQR(2+3) vira ((2+3)*(2+3)) = 5 x 5 = 25. Os parênteses em volta do argumento preservam a conta.
DOBRO(2+3) vira 2+3*2. A multiplicação tem precedência: 2 + (3 x 2) = 8. Sem parênteses de proteção, a macro troca o texto sem respeitar a intenção.

b) O #define é uma diretiva do pré-processador, não um comando da linguagem C. Ela faz substituição de texto, então um ponto e vírgula no final seria copiado junto para dentro do código, podendo causar erros. Usamos maiúsculas por convenção, para distinguir macros e constantes das variáveis e funções.

c) Com o espaço, "#define PRN (n) printf("%d", n)" define PRN como uma constante cujo texto de substituição é (n) printf("%d", n), e não uma macro com argumento. A forma correta é sem espaço entre o nome e o parêntese: #define PRN(n) printf("%d", n)

Diferença entre macro com argumentos e função comum: a macro é substituição de texto feita antes da compilação, sem tipos e sem chamada; a função tem tipo nos parâmetros, é compilada uma vez e executada a cada chamada.


QUESTAO 06

a) #include <stdio.h> (com ângulos) procura o arquivo nos diretórios padrão do compilador: usamos para bibliotecas do sistema. #include "areas.h" (com aspas) procura primeiro na pasta do próprio projeto: usamos para cabeçalhos feitos por nós.

b) #undef SOMA cancela a definição da macro SOMA, e dali em diante ela deixa de existir. A forma "#undef SOMA(x,y)" está errada porque o #undef recebe apenas o nome da macro, sem a lista de argumentos.

c) Se DEBUG não foi definido, será impressa a mensagem "Modo normal". Essa decisão é tomada no pré-processamento, antes da compilação: o pré-processador mantém só um dos blocos. Por isso as diretivas (#ifdef, #define, #include etc.) não aparecem no executável final: elas já foram resolvidas e removidas antes de o código virar programa.
