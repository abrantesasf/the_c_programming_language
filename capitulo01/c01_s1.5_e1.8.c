/**
 * c01_s1.5_e1.8.c (página 20)
 *
 * Programa para contar espaços, tabs e linhas
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
    int b = 0;    // contagem do número de espaços
    int t = 0;    // contagem do número de tabulações

    // Enquanto houver caracteres no input stream:
    // (terminamos o input com C-d)
    while ((c = getchar()) != EOF)
    {
        // Se o caractere for uma quebra de linha, incrementa a contagem:
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++b;
        else if (c == '\t')
            ++t;
    }
    printf("%d espaços, %d tabs e %d linhas\n", b, t, nl);
    
    return 0;
}
