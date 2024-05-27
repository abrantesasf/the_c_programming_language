/**
 * c01_s1.5_e1.10.c (página 20)
 *
 * Programa que copia seu input para o outpt, trocando cada tab por \t,
 * cada backspace por \b e cada contra-barra por \\, tornando-os visíveis.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linahs
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

int main (void)
{
    int c;           // armazena o caractere atual.

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
