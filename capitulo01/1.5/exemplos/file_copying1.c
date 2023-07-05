#include <stdio.h>

int main(void)
{
    int c = 0;

    c = getchar();      // Digite um ou mais caracteres e dê ENTER. No momento
                        // do ENTER o getchar() lê o primeiro caractere e con-
    while(c != EOF)     // tinua para o loop. Se não for EOF (^D no Linux), o
    {                   // caractere é impresso pelo putchar() e o próximo
        putchar(c);     // caractere é lido pelo getchar(), e assim por diante,
        c = getchar();  // até que os caracteres digitados terminem de serem
    }                   // impressos. Nesse momento o getchar() fica aguardando
                        // a próxima coisa a ser digitada. TENHA CERTEZA DE QUE
    return 0;           // ENTENDEU ESSE PROCESSO ANTES DE CONTINUAR!!!!
}
