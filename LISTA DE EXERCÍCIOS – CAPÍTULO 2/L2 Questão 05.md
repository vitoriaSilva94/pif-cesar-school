/* Questão 05. Avaliação de Expressões Lógicas e Relacionais — Determine o resultado lógico (1
para verdadeiro, 0 para falso) de cada uma das expressões relacionais e lógicas a seguir,
assumindo que as variáveis foram inicializadas como: 
int i = 1, j = 2, k = 3, n = 2
float x = 3.3, y= 4.4

a) i < j + 3        => Resultado: 1 (verdadeiro)
1 < 2+3
1 < 5
verdadeiro

b) 2 * i - 7 <= j - 8       => Resultado: 0 (falso)
2*1 - 7<= 2 -8
2 -7 <= 2-8
-5 <= -6
Falso

c) -x + y >= 2.0 * y        => Resultado: 0 (falso)
-3.3 + 4.4 >= 2.0 * 4.4
1.1 >= 8.8
Falso

d) x == y       => Resultado: 0 (falso)
3.3 == 4.4
Falso

e) !(n - j)         => Resultado: 1 (verdadeiro)
!(2-2)
!(0)
1


f) !n - j       => Resultado: -2
!2 - 2
0 -2
-2


g) i && j && k      => Resultado: verdadeiro
1 && 2 && 3
1&&1
i || ((j-3) && k)
1 || ((2-3) && 3) 
1 || ((-1) && 3) 
1 || 1 

h) i || j - 3 && k      => Resultado: 1 (verdadeiro)
(1 < 2) && (2 >= 3)
1 && 0


i) i < j && 2 >= k      => Resultado: 0 (falso)
(1 < 2) && (2 >= 3)
1 && 0 

j) i == 2 || j == 4 || k == 5       => Resultado: ? 0 (falso)
(1==2) || (2==4) || (3==5)
 0 || 0 || 0 