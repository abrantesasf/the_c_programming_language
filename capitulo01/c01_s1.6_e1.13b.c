/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.6_e1.13.c (K&R: página 24; T&G: páginas 17-19)
 *
 * Exercício 1.13: versão 2
 * Programa que imprime um histograma dos comprimentos das palavras que
 * recebe como input. O histograma é horizontal.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

#define IN  0           // Dentro de uma palavra
#define OUT 1           // Fora de uma palavra
#define TMAXPAL  20     // Tamanho máximo da palavra (palavras com até esse
                        //   tamanho serão exibidas no histograma; palavras
                        //   maiores não serão exibidas no histograma)
#define TMAXHIST 50     // Tamanho máximo da barra do histograma a ser exibida
                        //   na tela (considere um nonitor de 80 colunas)

int main (void)
{
    int c;                         // Caractere atual
    int status = OUT;              // Inicia fora da palavra
    int n = 0;                     // Tamanho da palavra atual
    int tampal[TMAXPAL + 1] = {0}; // Armazenamos TMAXPAL + 1 elementos do array
                                   //   para ter índices de 0 até TMAXPAL, ou
                                   //   seja, ignorando o índice 0 faremos a
                                   //   contagem de palavras com 1 até TMAXPAL
    int palgrandes = 0;            // Palavras com mais de TMAXPAL caracteres

    // Enquanto houver caracteres:
    while ((c = getchar()) != EOF)
    {
        // Se o caractere for um branco
        if (c == ' ' || c == '\n' || c == '\t')
        {
            // e estávamos dentro de uma palavra,
            if (status == IN)
            {
                // então significa que acabamos de sair de uma palavra
                // e já temos o contador de tamanho dessa palavra preenchido;
                // agora temos que verificar qual índice do array incrementar
                // e marcar que saímos da palavra:
                status = OUT;
                if (n > TMAXPAL)
                    ++palgrandes;
                else
                    ++tampal[n];
            }
            // Como saímos da palavra, temos que zerar o contador de tamanho:
            n = 0;
        }

        // Se o caractere não for um branco mas não estávamos dentro de uma
        // palavra, significa que acabamos de entrar na palavra. Precisamos
        // alterar o status e incrementar o contador do tamanho da palavra:
        else if (status == OUT)
        {
            status = IN;
            ++n;
        }

        // Por fim, estamos no meio da palavra e só precisamos aumentar o
        // contador do tamanho da palavra:
        else
            ++n;
    }

    // Nesse ponto já temos o array preenchido. Para exibir o histograma
    // horizontal de modo "bonito" na tela, precisamos saber qual a maior
    // barra a ser exibida e fazer um redimensionamento das barras de acordo
    // com TMAXHIST.

    // Obter a maior quantidade de palavras e colocar na variável maxval:
    int maxval = 0;
    for (int i = 0; i <= TMAXPAL; ++i)
        if (tampal[i] > maxval)
            maxval = tampal[i];

    // Vamos imprimir o histograma redimensionando as barras de acordo com
    // TMAXHIST e maxval:
    int barra = 0;
    for (int i = 1; i <= TMAXPAL; ++i)
    {
        // Para redimensionar as barras de acordo com TMAXHIST e maxval, o
        // cálculo intuitivo é "(tampal[i] / maxval) * TMAXHIST", mas isso
        // resultaria em 0 para qualquer tamanho que não fosse maxval por causa
        // da divisão inteira. Para evitar resultado 0 por divisão inteira,
        // fizemos a inversão dos fatores na expressão. Esse redimentionamento
        // fará com que a barra de maxval tenha o tamanho de TMAXHIST, e as
        // outras barras serão diminuídas proporcionalmente.
        barra = (tampal[i] * TMAXHIST) / maxval;

        // Para imprimir pelo menos 1 asterisco:
        if (tampal[i] > 0 && barra == 0)
            barra = 1;

        // Imprime o histograma horizontal:
        printf("%4i - %4i :", i, tampal[i]);
        for (int j = 0; j < barra; ++j)
            printf("*");
        printf("\n");
    }

    // Se algumas palavras foram grandes, avisa:
    if (palgrandes > 0)
        printf("%i palavras são maiores do que %i.\n", palgrandes, TMAXPAL);
}
