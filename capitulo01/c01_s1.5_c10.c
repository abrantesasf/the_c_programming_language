/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * 2ª edição, 1988
 * 
 * c01_s1.5_c10.c (página 18)
 *
 * Conta a quantidade de caracteres no input.
 * 2ª versão.
 */

#include <stdio.h>

int main (void)
{
    double n;

    // Note a utilziação do getchar dentro da condição
    // de parada do loop for! O corpo do loop só tem
    // um ";", ou seja, é uma sentença nula (sem ação).
    for (n = 0.0; getchar() != EOF; ++n)
        ;
    printf("%.0f\n", n);
}
