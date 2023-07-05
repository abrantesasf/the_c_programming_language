#include <stdio.h>

int main(void)
{
    printf("%s", "hello, world\n");
    printf("%s", "hello, world\t");
    printf("%s", "hello, world\b");
    printf("%s", "hello, world\"");
    printf("%s", "hello, world\\");
    printf("%s", "hello, world\a"); // não dá erro, mas não faz nada?
    printf("%s", "hello, world\w"); // dá erro, só imprime o w no final
    printf("%s", "hello, world\y"); // dá erro, só imprime o y no final
    return 0;
}
