/*Questão 15. Geração de Padrões Visuais com Laços Aninhados: Triângulo de Floyd — Escreva um
programa em C que leia um número inteiro positivo N e imprima N linhas do **Triângulo de Floyd**
utilizando laços aninhados. Por exemplo, para N = 5, a saída no console deve ser exatamente:*/
#include <stdio.h>
 
int main() {
    int n, linha, coluna, numero = 1;
 
    printf("Digite o numero de linhas N: ");
    scanf("%d", &n);
 
    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d", numero);
            if (coluna < linha) {
                printf(" ");
            }
            numero++;
        }
        printf("\n");
    }
 
    return 0;
}