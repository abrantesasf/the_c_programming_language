/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.6_c13.c (K&R: página 22)
 *
 * Programa que conta a quantidade de cada um dos dígitos (0 a 9), a quantidade
 * de "brancos" (espaços, tabs e quebras de linha) e a quantidade de todos os
 * outros caracteres.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

int main (void)
{
    int c;                   // caractere atual
    int brancos = 0;         // contagem de brancos
    int outros = 0;          // contagem de outros caracteres
    int digitos[10] = {0};   // contagem de cada dígito (aqui estamos utilizando
                             // uma maneira nova de inicialização do array, que
                             // deixa todos os elementos com o valor 0)

    // Enquanto ainda houver caracteres:
    while ((c = getchar()) != EOF)
    {
        // Se o caractere representa um dígito de 0 a 9 (que correspondem aos
        // inteiros 48 a 57 na tabela ASCII):
        if (c >= '0' && c <= '9')
            // Calculamos o índice do array a ser incrementado com c - '0',
            // que retorna um inteiro de 0 a 9, e usamos esse índice para
            // contar os dígitos (incrementar a posição correspondente no array)
            ++digitos[c - '0'];
        
        // Se o caractere for um branco, incremente os brancos:
        else if (c == ' ' || c == '\n' || c == '\t')
            ++brancos;

        // Se não for dígito nem branco, incrementa os outros:
        else
            ++outros;
    }

    printf("Dígitos = ");
    for (int i = 0; i < 10; ++i)
        printf(" %d", digitos[i]);
    printf(", brancos = %d, outros = %d\n", brancos, outros);

    return 0;
}
