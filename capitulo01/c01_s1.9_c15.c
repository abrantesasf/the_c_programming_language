/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.9_c15.c (K&R: página ; T&G: página )
 */

#include <stdio.h>

#define TMAXLINHA 1000     // tamanho máximo da linha no input

int getlinha (char linha[], int tmaxlinha);
void copiar (char para[], char de[]);

int main (void)
{
    int tam = 0;                     // Tamanho da linha atual
    int max = 0;                     // Maior linha até agora
    char linha[TMAXLINHA];           // Linha atual do input
    char maior_linha[TMAXLINHA];     // Maior linha até agora

    while ((tam = getlinha(linha, TMAXLINHA)) > 0)
        if (tam > max)
        {
            max = tam;
            copiar(maior_linha, linha);
        }

    if (max > 0)
        printf("%s", maior_linha);

    return 0;
}

/**
 * GETLINHA
 * Lê uma linha para LINHA e retorna seu tamanho.
 */
int getlinha (char linha[], int tmaxlinha)
{
    int c, i;

    for (i = 0; i < tmaxlinha - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        linha[i] = c;

    if (c == '\n')
    {
        linha[i] = c;
        ++i;
    }

    linha[i] = '\0';

    return i;
}

/**
 * COPIAR
 * Copia um array de caracteres de "DE" para "PARA", assumindo que
 * o array PARA é grande o suficiente.
 */
void copiar (char para[], char de[])
{
    int i = 0;
    while ((para[i] = de[i]) != '\0')
        ++i;
}
