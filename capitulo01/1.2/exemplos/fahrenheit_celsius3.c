#include <stdio.h>

/* Imprime uma tabela de conversão de Fahrenheit para Celsius,
   de 0 até 300 ºF, aumentando de 20 em 20 graus, através da
   fórmula:
                ºC = (5/9) * (ºF - 32)

   Atenção: em C a divisão 5/9 é considerada uma DIVISÃO INTEIRA e,
   portanto, faz o TRUNCAMENTO de qualquer parte fracionária. Neste
   caso a divisão retornaria sempre 0 (zero), fazendo com que a
   conversão sempre resultasse em 0ºC. Leve esse fato em
   consideração. */

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f   %6.2f\n", fahr, celsius); /* justifica a direita */
        fahr = fahr + step;
    }
  
    return 0;
}
