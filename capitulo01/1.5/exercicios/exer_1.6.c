#include <stdio.h>

int main(void)
{
    int c;

    /* Aqui era esperado que c fosse 0 ou 1 pois, segundo K&R, a precedência do
       operador != é maior do que a do operador =, mas se usar putchar() ao
       invés de printf() a impressão não funciona (o caractere é lido mas a
       impressão dos valores booleanos não ocorre). Para que os valores booleanos
       sejam impressos corretamente é necessário usar printf(). Ainda não sei
       muito bem porque esse comportamento ocorre... */
    while(c = getchar() != EOF)
        printf("%d\n", c);

    printf("%s", "Recebi EOF (^D), terminando o programa!\n");
    
    return 0;
}
