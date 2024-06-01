/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.5_e1.12.c (K&R: página 21; T&G: página 16)
 *
 * Exercício 1.12:
 * Programa que imprime seu input, uma palavra por linha.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

#define IN  1    // dentro da palavra
#define OUT 0    // fora da palavra

int main (void)
{
    int c;              // caractere atual
    int status = OUT;   // status atual do caractere (dentro ou fora de palavra)

    // Enquanto houver caracteres:
    while ((c = getchar()) != EOF)
    {
        // Se o caractere não é um "branco":
        if (c != ' ' && c != '\t' && c != '\n')
        {
            // O caractere está dentro da palavra e deve ser impresso:
            status = IN;
            putchar(c);
        }
        // Se o caractere for um "branco" e o status atual for IN, significa
        // que estamos saindo da palavra:
        else if ((c == ' ' || c == '\t' || c == '\n') && status == IN)
        {
            // Nesse caso mudamos o status para OUT e imprimimos uma \n:
            status = OUT;
            putchar('\n');
        }
        // Caso contrário, continuamos fora da palavra e não fazemos nada:
        else
            status = OUT;
    }

    return 0;
}
