/**
 * c01_s1.5_c10.c (página 18)
 *
 * Conta a quantidade de caracteres no input.
 * 2ª versão
 */

#include <stdio.h>

int main (void)
{
    double n;

    for (n = 0.0; getchar() != EOF; ++n)
        ;
    printf("%.0f\n", n);
}
