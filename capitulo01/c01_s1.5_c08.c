/**
 * c01_s1.5_c08.c (página 17)
 *
 * Faz a cópia de caracteres, copiando o input para
 * o output, um caractere por vez. 2ª versão.
 */

#include <stdio.h>

int main (void)
{
    // c precisa armazenar qualquer caractere, incluindo o valor EOF, que é um
    // valor que getchar retorna quando não há mais nenhum input. EOF é um valor
    // distinto, que não representa nenhum caractere. Como EOF pode ser um valor
    // grande, maior do que o suportado pelo tipo char, é melhor declarar a
    // variável c como int. Obs.: EOF é um inteiro definido em stdio.h. Para
    // sinalizar EOF no Linux, usamos ^D (ctrl-d).
    int c;

    // Idimo para obter o próximo caractere diretamente na condição do loop,
    // e verificar se é caractere ou EOF. O próprio loop se encarrega de pegar
    // o próximo caractere. Os parênteses são necessários pois a precdência de
    // != é maior do que =.
    while ((c = getchar()) != EOF)
    {
        // Imprime o caractere:
        putchar(c);
     }
}
