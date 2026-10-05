/*A declaração de variáveis define o tipo e o identificador de cada espaço reservado na
memória. Analise cada uma das declarações na tabela a seguir, preencha o seu status (Correto ou
Incorreto) e, caso seja incorreto, justifique detalhadamente o erro sintático:*/

a) int a; | [ Correto ] | [ - ]
b) float b; | [ Correto ] | [ - ]
c) double float c; | [ Incorreto ] | [ Erro sintático: double e float são dois tipos base diferentes, e a declaração só pode ter um. Não existe combinação de dois tipos base. Se o objetivo era precisão dupla, o correto seria "double c;". ]
d) unsigned char d; | [ Correto ] | [ - ]
e) unsigned e; | [ Correto ] | [ - ] (unsigned sozinho equivale a unsigned int)
f) long float f; | [ Incorreto ] | [ Erro sintático: o modificador long só pode ser aplicado a int e a double. Aplicado a float não é válido em C padrão (long float existia em versões muito antigas como sinônimo de double, mas foi eliminado). Para o efeito desejado, usa-se "long double f;" ou "double f;". ]
g) long g; | [ Correto ] | [ - ] (long sozinho equivale a long int)
h) long double h; | [ Correto ] | [ - ]
