/**
 * c01_s1.5_c07.c (página 16)
 *
 * Faz a cópia de caracteres, copiando o input para
 * o output, um caractere por vez. 1ª versão.
 */

#include <stdio.h>

int main (void)
{
    // c precisa armazenar qualquer caractere, incluindo o valor EOF, que é um
    // valor que getchar retorna quando não há mais nenhum input. EOF é um valor
    // distinto, que não representa nenhum caractere. Como EOF pode ser um valor
    // grande, maior do que o suportado pelo tipo char, é melhor declarar a
    // variável c como int. Obs.: EOF é um inteiro definido em stdio.h. Para
    // sinalizar EOF no Linux, usamos ^D (ctrl-d).
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
