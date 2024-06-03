/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.7_e1.15.c (K&R: página 27; T&G: página 22)
 *
 * Exercício 1.15:
 * Programa de conversão de temperatura usando uma
 * função para a conversão.
 */

#include <stdio.h>

#define MIN   0     // Temperatura mínima
#define MAX 300     // Temperatura máxima
#define STEP 20     // Intervalo

double fah2cel (double fah);

int main (void)
{
    printf("Fahrenheit   Celsius\n");
    printf("--------------------\n");
    for (int i = MIN; i <= MAX; i += STEP)
        printf("%10.0f   %7.2f\n", (double) i, fah2cel ((double) i) );
    return 0;
}

double fah2cel (double fah)
{
    return (5.0 / 9.0) * (fah - 32.0);
}
