#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("%s", "Celsius     Fahrenheit\n");
    printf("%s", "----------------------\n");
    while (celsius <= upper)
    {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%7.1f      %9.1f\n", celsius, fahr); /* justifica a direita */
        celsius += step;
    }
  
    return 0;
}
