/**
 * The C Programming Language
 * Brian W. Kernighan & Dennis M. Ritchie
 * (2ª edição em 1988)
 *
 * The C Answer Book
 * Clovis L. Tondo & Scott E. Gimpel
 * (2ª edição em 1989)
 * 
 * c01_s1.5_c08.c (K&R: página 17)
 *
 * Faz a cópia de caracteres, copiando o input para
 * o output, um caractere por vez. 2ª versão, utilizando o
 * getchar dentro da condição do loop while. Este é um idioma
 * comum em C.
 *
 * Lembre-se de que:
 *    - Um stream de texto é uma seqüência de caracteres divididos em linhas
 *    - E uma linha contém 0 ou mais caracteres terminados por '\n'
 */

#include <stdio.h>

int main (void)
{
    // C precisa armazenar qualquer caractere, incluindo o valor EOF, que é um
    // valor que getchar retorna quando não há mais nenhum input. EOF é um valor
    // distinto, que não representa nenhum caractere. Como EOF pode ser um valor
    // grande, maior do que o suportado pelo tipo char, é melhor declarar a
    // variável c como int. Obs.: EOF é um inteiro definido em stdio.h. Para
    // sinalizar EOF no Linux, usamos ^D (ctrl-d, C-d).
    int c;

    // Idimo para obter o próximo caractere diretamente na condição do loop,
    // e verificar se é caractere ou EOF. O próprio loop se encarrega de pegar
    // o próximo caractere. Os parênteses são necessários pois a precedência de
    // != é maior do que =.
    while ((c = getchar()) != EOF)
    {
        // Imprime o caractere:
        putchar(c);
     }
}
