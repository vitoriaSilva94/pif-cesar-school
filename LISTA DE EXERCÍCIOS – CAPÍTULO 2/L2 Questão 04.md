/* Questão 04. Operadores de Atribuição Composta e Precedência — Os operadores de
atribuição composta (+=, -=, *=, /=, %=) executam uma operação aritmética e uma atribuição
simultaneamente. Determine quais serão os valores das variáveis a, b, c e d após a execução
sequencial completa das seguintes instruções de inicialização e atribuição em C. Justifique seus
cálculos apresentando a ordem de avaliação passo a passo:

Estado inicial: a=1, b=2, c=3, d=4

Passo 1: a += b + c;
  → a = 1 + (2 + 3) = 1 + 5 = 6
  → Estado: a=6, b=2, c=3, d=4

Passo 2: b *= c = d + 2;
  → Avalia da direita: c = d + 2 = 4 + 2 = 6
  → Depois: b = b * c = 2 * 6 = 12
  → Estado: a=6, b=12, c=6, d=4

Passo 3: d %= a + a + a;
  → a + a + a = 6 + 6 + 6 = 18
  → d = 4 % 18 = 4  (4 é menor que 18, então o resto é o próprio 4)
  → Estado: a=6, b=12, c=6, d=4

Passo 4: d -= c -= b -= a;
  → Avalia da direita para esquerda:
  → b -= a  → b = 12 - 6 = 6
  → c -= b  → c = 6 - 6 = 0
  → d -= c  → d = 4 - 0 = 4
  → Estado: a=6, b=6, c=0, d=4

Passo 5: a += b += c += 7;
  → Avalia da direita para esquerda:
  → c += 7  → c = 0 + 7 = 7
  → b += c  → b = 6 + 7 = 13
  → a += b  → a = 6 + 13 = 19
  → Estado: a=19, b=13, c=7, d=4

VALORES FINAIS: a=19, b=13, c=7, d=4

