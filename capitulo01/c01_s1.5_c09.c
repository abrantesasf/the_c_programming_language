/**
 * c01_s1.5_c09.c (página 18)
 *
 * Conta a quantidade de caracteres no input.
 * 1ª versão
 */

#include <stdio.h>

int main (void)
{
    long int n = 0;

    // Como não precisamos fazer nada com os caracteres lidos, simplemente
    // vamos ignorar esses caracteres e verificar se são EOF. Aqui há um
    // problema: o caractere final de linha, \n, é contado também; vamos
    // deixar assim por enquanto.
    while (getchar() != EOF)
        ++n;

    printf("%ld\n", n);
}
