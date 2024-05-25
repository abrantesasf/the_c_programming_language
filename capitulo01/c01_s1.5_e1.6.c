/**
 * c01_s1.5_e1.6.c (página 17)
 *
 * Verifica que a expressão "getchar() != EOF" é 0 ou 1.
 */

#include <stdio.h>

int main (void)
{
    int c;

    // ATENÇÃO: a expressão na condição irá gerar um warning nos compiladores
    // novos. Como este é apenas um exercício, não há maiores problemas.
    // Lembre-se de que em produção não devemos ignorar warnings!
    while (c = getchar() != EOF)
    {
        // Como o valor que estará em c será a representação de true ou false,
        // (1 ou 0) não é possível usar putchar pois esses valores não
        // representam caracteres ASCII imprimíveis; é necessário usar printf
        // para imprimir o valor de um número inteiro.
        // ATENÇÃO: para cada total de caracteres em uma linha, o programa irá
        // imprimir um booleano a mais, correspondente ao caractere \n no final
        // da linha.
        printf("%d quando caractere\n", c);
    }

    printf("%d quando EOF\n", c);
}
