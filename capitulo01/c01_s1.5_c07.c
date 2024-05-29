/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * 2ª edição, 1988
 * 
 * c01_s1.5_c07.c (página 16)
 *
 * Faz a cópia de caracteres, copiando o input para
 * o output, um caractere por vez. 1ª versão.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

int main (void)
{
    // C precisa armazenar qualquer caractere, incluindo o valor EOF, que é um
    // valor que getchar retorna quando não há mais nenhum input. EOF é um valor
    // distinto, que não representa nenhum caractere. Como EOF pode ser um valor
    // grande, maior do que o suportado pelo tipo char, é melhor declarar a
    // variável c como int. Obs.: EOF é um inteiro definido em stdio.h. Para
    // sinalizar EOF no Linux, usamos ^D (ctrl-d, C-d).
    int c;

    // Obtém o primeiro caractere:
    c = getchar();

    // Enquando o caracere obtido não for o EOF:
    while (c != EOF)
    {
        // Imprime o caractere e pega o próximo:
        putchar(c);
        c = getchar();
    }
}
