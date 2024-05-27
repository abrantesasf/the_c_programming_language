/**
 * c01_s1.5_e1.9.c (página 20)
 *
 * Programa que copia seu input para o outpt, trocando cada string de
 * um ou mais "blanks" por um único espaço em branco
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linahs
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

int main (void)
{
    int c;           // armazena o caractere atual.
    int ultc = 'x';  // armazena o último caractere; inicia arbitrário

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t')
            putchar(c);
        else if (c == ' ' || c == '\t')
            if (ultc != ' ' && ultc != '\t')
                putchar(' ');
        ultc = c;
    }
    return 0;
}
