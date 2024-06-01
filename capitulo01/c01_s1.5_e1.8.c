/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.5_e1.8.c (K&R: página 20; T&G: páginas 9-10)
 *
 * Exercício 1.8:
 * Programa para contar "brancos", espaços, tabulações
 * e quebras de linha, mostrando a quantidade de cada um.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

int main (void)
{
    int c;        // caractere atual
    int nl = 0;   // contagem do número de linhas
    int ne = 0;   // contagem do número de espaços
    int nt = 0;   // contagem do número de tabulações

    // Enquanto houver caracteres no input stream:
    // (terminamos o input com C-d)
    while ((c = getchar()) != EOF)
    {
        // Se o caractere for uma quebra de linha, incrementa a contagem:
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++ne;
        if (c == '\t')
            ++nt;
    }
    printf("%d espaço(s), %d tab(s) e %d linha(s)\n", ne, nt, nl);
    
    return 0;
}
