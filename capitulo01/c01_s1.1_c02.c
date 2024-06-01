/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.1_c02.c (K&R: página 8)
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
