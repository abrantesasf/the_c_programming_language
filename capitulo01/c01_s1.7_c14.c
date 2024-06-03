/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.7_c14.c (K&R: páginas 24-25)
 */

#include <stdio.h>

// Protótipo dos subprogramas: o nome dos parâmetros NÃO PRECISA
// ser igual ao nome utilizado na definição da função. Aliás, aqui
// nos protótipos o nome dos parâmetros é totalmente opcional!
int pot (int b, int e);

int main (void)
{
    for (int i = 0; i < 10; ++i)
        printf("%d %6d %6d\n", i, pot(2, i), pot(-3, i));
    return 0;
}

// Definição da função potência (pot):
int pot (int base, int expoente)
{
    int resultado = 1;
    for (int i = 1; i <= expoente; ++i)
        resultado = base * resultado;
    return resultado;
}
