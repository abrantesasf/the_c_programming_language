/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.6_e1.14.c (K&R: página 24; T&G: página )
 *
 * Exercício 1.14:
 * Programa para imprimir um histograma com a freqüência dos
 * diferentes caracteres em seu input.
 */

#include <stdio.h>

#define TMAXHIST  30   // Tamanho máximo da barra do histograma
#define NCARS    128   // Número de caracteres na tabela ASCII.
                       //    Atenção: estou partindo do pressuposto que o input
                       //    só terá caracteres ASCII originais, sem acentos.
                       //    Se o input contiver acentos o programa não
                       //    funcionará corretamente!!!

int main (void)
{
    int c;                    // Caractere atual
    int freq[NCARS] = {0};    // Array para a contagem dos caracteres

    // Enquanto houver caracteres,
    while ((c = getchar()) != EOF)
    {
        // Aumenta a contagem desse caractere específico
        ++freq[c];
    }

    // Verifica qual foi a maior freqüência encontrada, para podermos
    // imprimir o histograma de forma dimensionada correta
    int freqmax = 0;
    for (int i = 0; i < NCARS; ++i)
        if (freq[i] > freqmax)
            freqmax = freq[i];

    // Imprime o histograma (horizontal)
    int barra = 0;
    for (int i = 0; i < NCARS; ++i)
    {
        // Calcula o tamanho da barra, levando-se em conta o TMAXHIST,
        // a freqüência e a freqmax. O cálculo intuitivo para o tamanho
        // proporcional da barra seria "(freq[i] / freqmax) * TMAXHIST",
        // mas isso resultaria em 0 para todas as freqüências exceto as
        // que fossem iguais à freqmax, devido à divisão inteiro. Para
        // evitar o 0 da divisão inteira, mudamos a fórmula abaixo.
        // Também garantimos que se freq[i] > 0, iremos imprimir pelo
        // menos 1 asterisco.
        barra = (freq[i] * TMAXHIST) / freqmax;
        if (freq[i] > 0 && barra == 0)
            barra = 1;

        // Agora vamos imprimir o histograma, com a seguinte observação:
        // nós contamos TODOS os caracteres, mas somente os caracteres
        // 32 (espaço) até o 126 (~) da tabela ASCII são imprimíveis,
        // assim, só vamos gerar o histograma para esses caracteres:
        if (i >= ' ' && i <= '~')
        {
            printf("%3d (%c) - %4d: ", i, i, freq[i]);
            for (int j = 0; j < barra; ++j)
                printf("*");
            printf("\n");
        }
    }
}
