/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * 2ª edição, 1988
 * 
 * c01_s1.5_e1.9.c (página 20)
 *
 * Programa que copia seu input para o outpt, trocando cada string
 * de um ou mais espaços por um único espaço.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

int main (void)
{
    int c;           // caractere atual.
    int cant = 'x';  // caractere anterior; inicia arbitrário

    // Enquanto houver caracteres,
    while ((c = getchar()) != EOF)
    {
        // Se o caractere não é espaço, imprime:
        if (c != ' ')
            putchar(c);
        // Se o caractere atual é um espaço,
        if (c == ' ')
            // E se o caractere anterior não for um espaço
            if (cant != ' ')
                // Imprime um espaço:
                putchar(' ');
        // Atualiza o caractere anterior:
        cant = c;
    }
}
