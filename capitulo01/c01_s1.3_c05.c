/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.3_c05.c (K&R: página 13)
 *
 * Imprime uma tabela Fahrenheit-Celsius,
 * para fahr = 0, 20, ..., 300, utilizando um
 * loop for ao invés de um loop while.
 */

#include <stdio.h>

int main (void)
{
    for (int fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d %6.1f\n", fahr, (5.0f/9.0f) * (float) (fahr - 32));
}
