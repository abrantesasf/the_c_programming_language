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
 * (outra versão)
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
        // Se o caractere é um "branco",
        if (c == ' ' || c == '\n' || c == '\t')
        {
            // mas estávamos em uma palavra,
            if (status == IN)
            {
                // então estamos saindo da palavra e devemos
                // imprimir uma \n e trocar o status:
                status = OUT;
                putchar('\n');
            }
        }
        // Ou se o caracter não é um branco e estávamos fora
        // de uma palavra,
        else if (status == OUT)
        {
            // então estamos entrando na palavra e imprimimos o caractere
            // inicial e mudamos o status:
            status = IN;
            putchar(c);
        }
        // Caso contrário estamos dentro da palavra e imprimimos o caractere:
        else
            putchar(c);
    }

    return 0;
}
