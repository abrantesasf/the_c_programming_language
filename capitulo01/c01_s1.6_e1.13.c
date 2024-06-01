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
 * Exercício 1.13:
 * Programa que imprime um histograma dos comprimentos das palavras que
 * recebe como input. O histograma é horizontal.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

#define IN  0   // dentro de uma palavra
#define OUT 1   // fora de uma palavra

int main (void)
{
    int c;                        // caractere atual
    int status = OUT;             // inicia fora da palavra
    int n = 0;                    // tamanho da palavra atual
    int comprimentos[21] = {0};   // armazenamos 20 tamanhos, de 1 até 19, mais
                                  // 1 tamanho extra para palavras com 20+

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
                if (n >= 20)
                    ++comprimentos[20];
                else
                    ++comprimentos[n];
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

    // Vamos imprimir o histograma:
    for (int i = 1; i < 21; ++i)
    {
        printf("%2i: ", i);
        for (int j = 0; j < comprimentos[i]; ++j)
            printf("*");
        printf("\n");
    }
}
