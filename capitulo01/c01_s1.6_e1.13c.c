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
 * Exercício 1.13: versão 3
 * Programa que imprime um histograma dos comprimentos das palavras que
 * recebe como input. O histograma é vertical.
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
#define TMAXHIST 20     // Tamanho máximo da barra do histograma a ser exibida
                        //   na tela (considere um nonitor de 60 linhas)

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
    // vertical de modo "bonito" na tela, precisamos saber qual a maior
    // barra a ser exibida e fazer um redimensionamento das barras de acordo
    // com TMAXHIST.
    // Obter a maior quantidade de palavras e colocar na variável maxval:
    int maxval = 0;
    for (int i = 0; i <= TMAXPAL; ++i)
        if (tampal[i] > maxval)
            maxval = tampal[i];

    // Vamos imprimir o histograma redimensionando as barras de acordo com
    // TMAXHIST e maxval, sendo que agora o histograma é VERTICAL.
    // Para cada tamanho de barra vertical do histograma, de TMAXHIST até 1,
    int barra = 0;
    for (int i = TMAXHIST; i > 0; --i)
    {
        // Para cada quantidade de palavras, de 1 até TMAXPAL,
        for (int j = 1; j <= TMAXPAL; ++j)
        {
            // Calcula o tamanho da barra do histograma da palavra "j", sendo
            // que garantimos a impressão de pelo menos 1 asterisco:
            barra = (tampal[j] * TMAXHIST) / maxval;
            if (tampal[j] > 0 && barra == 0)
                barra = 1;
            
            // Se a barra vertical da palavra na posição "j" tiver a mesma
            // altura da barra vertical considerada, imprime um asterisco
            if (barra >= i)
                printf("  * ");
            // Caso contrário, imprime um espaço em branco:
            else
                printf("    ");
        }
        putchar('\n');
    }

    // Imprime o número de letras da palavra:
    for (int i = 1; i <= TMAXPAL; ++i)
        printf("%3i ", i);
    putchar('\n');
    
    // Imprime a contagem:
    for (int i = 1; i <= TMAXPAL; ++i)
        printf("%3i ", tampal[i]);
    putchar('\n');
    
    // Se algumas palavras foram grandes, avisa:
    if (palgrandes > 0)
        printf("%i palavras são maiores do que %i.\n", palgrandes, TMAXPAL);
}
