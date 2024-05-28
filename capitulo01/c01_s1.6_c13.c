/**
 * c01_s1.6_c13.c (página 22)
 *
 * Programa que conta a quantidade de cada um dos dígitos (0 a 9), a quantidade
 * de "brancos" (espaços, tabs e quebras de linha) e a quantidade de todos os
 * outros caracteres.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

int main (void)
{
    int c;                   // caractere atual
    int brancos = 0;         // contagem de brancos
    int outros = 0;          // contagem de outros caracteres
    int digitos[10] = {0};   // contagem de cada dígito

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++digitos[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++brancos;
        else
            ++outros;
    }

    printf("Dígitos = ");
    for (int i = 0; i < 10; ++i)
        printf(" %d", digitos[i]);
    printf(", brancos = %d, outros = %d\n", brancos, outros);

    return 0;
}
