/**
 * c01_s1.2_c03.c (página 9)
 *
 * Imprime uma tabela Fahrenheit-Celsius,
 * para fahr = 0, 20, ..., 300.
 */

#include <stdio.h>

int main (void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }
}
