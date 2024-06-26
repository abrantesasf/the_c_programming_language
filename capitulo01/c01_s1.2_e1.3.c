/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.2_e1.3.c (K&R: página 13; T&G: página 4)
 *
 * Exercício 1.3:
 * Imprime uma tabela Fahrenheit-Celsius,
 * para fahr = 0, 20, ..., 300, com um título
 * acima da tabela.
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

    printf("Fahrenheit Celsius\n");
    printf("------------------\n");
    while (fahr <= (float) upper)
    {
        celsius = 5.0f/9.0f * (fahr - 32.0f);
        printf("%10.0f %7.1f\n", fahr, celsius);
        fahr += step;
    }
}
