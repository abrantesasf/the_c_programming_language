/**
 * c01_s1.5_c11.c (página 19)
 *
 * Conta a quantidade de linhas em um input
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linahs
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

int main (void)
{
    int c;        // armazena o caractere atual
    int nl = 0;   // contagem do número de linhas

    // Enquanto houver caracteres no input stream:
    // (terminamos o input com C-d)
    while ((c = getchar()) != EOF)
    {
        // Se o caractere for uma quebra de linha, incrementa a contagem:
        if (c == '\n')
            ++nl;
    }
    printf("%d\n", nl);
    
    return 0;
}
