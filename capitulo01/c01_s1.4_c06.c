/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * 2ª edição, 1988
 * 
 * c01_s1.4_c06.c (página 15)
 *
 * Imprime uma tabela Fahrenheit-Celsius,
 * para fahr = 0, 20, ..., 300, utilizando
 * constantes simbólicas para retirnar números
 * mágicos do código principal.
 */

#include <stdio.h>

#define LOWER 0     // limite inferior da tabela
#define UPPER 300   // limite superior da tabela
#define STEP  20    // intervalo de cada temperatura

int main (void)
{
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d %6.1f\n", fahr, (5.0f/9.0f) * (float) (fahr - 32));
}
