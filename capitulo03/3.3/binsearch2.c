#include <stdio.h>

#define N 10

int binsearch(int x, int v[], int n);

int main(void)
{
    int v[N] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int buscado = 10;
    
    int pos = binsearch(buscado, v, N);

    if (pos >= 0)
        printf("O número %d está no array na posição %d.\n", buscado, pos);
    else
        printf("O número %d não está no array.\n", buscado);

    return 0;
}


/**
 * binsearch: procura um número "x" em um array ORDENADO "v[]" de tamanho "n",
 * retornando a posição (entre 0 e n-1) de "x", se ele estiver no array, ou
 * -1 se ele não estiver no array.
 */
int binsearch(int x, int v[], int n)
{
    int menor, meio, maior;
    menor = 0;
    maior = n - 1;

    while (menor <= maior)
    {
        meio = (menor + maior) / 2;

        if (x < v[meio])
            maior = meio - 1;
        else if (x > v[meio])
            menor = meio + 1;
        else
            return meio;
    }

    return -1;
}
