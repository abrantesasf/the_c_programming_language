#include <stdio.h>

// Definição de CONSTANTES SIMBÓLICAS (ou NOMES SIMBÓLICOS).
// Constantes simbólicas não são variáveis e, portanto, não podem aparecer em
// sentenças de declaração de variáveis. Como não são sentenças, não terminam
// em ";".

#define   LOWER   0     /* limite inferior da tabela de temperatura */
#define   UPPER   300   /* limite superior da tabela de temperatura */
#define   STEP    20    /* "step" da tabela de temperatura */

int main(void)
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%4d   %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    return 0;
}
