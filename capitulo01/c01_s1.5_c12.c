/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.5_c12.c (K&R: página 20)
 *
 * Conta a quantidade de linhas, palavras e caracteres em um input,
 * considerando que uma palavra é qualquer seqüência de caracteres
 * que não contenha um espaço, uma tab ou um \n.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

#define IN  1      // dentro de uma palavra
#define OUT 0      // fora de uma palavra

int main (void)
{
    int np = 0;    // número de palavras
    int nc = 0;    // número de caracteres
    int nl = 0;    // número de linhas

    int c;             // caractere atual
    int status = OUT;  // Inicia fora de uma palavra

    while ((c = getchar()) != EOF)
    {
        // Todo caractere é contado (incluindo \n, \t e ' ')
        ++nc;

        // Depois verificamos se é uma \n e contamos
        if (c == '\n')
            ++nl;

        // Depois verificamos se estamos saindo de uma palavra e
        // mudamos o status para OUT...
        if (c == ' ' || c == '\n' || c == '\t')
            status = OUT;
        // ... e, se não for ' ', \n ou \t, E se estivermos fora
        // de uma palavra, então estamos começando uma nova palavra:
        // mudamos o status para IN e contamos a palavra.
        else if (status == OUT)
        {
            status = IN;
            ++np;
        }
    }

    printf("%d linha(s), %d palavra(s) e %d caractere(s).\n", nl, np, nc);
    return 0;
}
