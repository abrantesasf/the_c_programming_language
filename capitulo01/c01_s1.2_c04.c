/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * 2ª edição, 1988
 * 
 * c01_s1.2_c04.c (página 12)
 *
 * Imprime uma tabela Fahrenheit-Celsius,
 * para fahr = 0, 20, ..., 300. Versão com ponto
 * flutuante ao invés de inteiro.
 */

#include <stdio.h>

int main (void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = (float) lower;

    while (fahr <= (float) upper)
    {
        celsius = 5.0f/9.0f * (fahr - 32.0f);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
}
