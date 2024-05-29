/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * 2ª edição, 1988
 * 
 * c01_s1.1_c02.c (página 8)
 *
 * Imprime um hello world, quebrando a impressão
 * em diversas chamadas printf.
 */

#include <stdio.h>

int main (void)
{
    printf("Hello, ");
    printf("world");
    printf("\n");
}
