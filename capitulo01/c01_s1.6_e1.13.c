/**
 * c01_s1.6_e1.13.c (página 24)
 *
 * Programa que imprime um histograma dos comprimentos das palavras que
 * recebe como input. O histograma é horizontal.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

#define IN  0
#define OUT 1

int main (void)
{
    int c;
    int status = OUT;
    int n = 0;
    int comprimentos[21] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (status == IN)
            {
                status = OUT;
                if (n >= 20)
                    ++comprimentos[20];
                else
                    ++comprimentos[n];
            }
            n = 0;
            
        }
        else if (status == OUT)
        {
            status = IN;
            ++n;
        }
        else
            ++n;
    }

    for (int i = 1; i < 21; ++i)
    {
        printf("%2i: ", i);
        for (int j = 0; j < comprimentos[i]; ++j)
            printf("*");
        printf("\n");
    }
}
