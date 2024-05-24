/**
 * c01_s1.3_e1.5.c (página 14)
 *
 * Imprime uma tabela Fahrenheit-Celsius,
 * para fahr = 300, 280, ..., 0.
 */

#include <stdio.h>

int main (void)
{
    for (int fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d %6.1f\n", fahr, (5.0f/9.0f) * (float) (fahr - 32));
}
