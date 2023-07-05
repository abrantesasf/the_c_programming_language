#include <stdio.h>

int main(void)
{
    int c;

    // Os parênteses ao redor de "c = getchar()" são necessários pois a
    // precedência do operador != é maior do que a do operador =.
    while((c = getchar()) != EOF)
        putchar(c);

    printf("%s\n", "Recebi EOF, terminando o programa.");

    return 0;
}
