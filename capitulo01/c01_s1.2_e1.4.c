/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.2_e1.4.c (K&R: página 13; T&G: página 5)
 *
 * Exercício 1.4:
 * Imprime uma tabela Celsius-Fahrenheit,
 * para celsius = 0, 20, ..., 300.
 */

#include <stdio.h>

int main (void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = (float) lower;

    printf("Celsius Fahrenheit\n");
    printf("------------------\n");
    while (celsius <= (float) upper)
    {
        fahr = (9.0f / 5.0f) * celsius + 32.0f;
        printf("%7.0f %10.1f\n", celsius, fahr);
        celsius += step;
    }
}
