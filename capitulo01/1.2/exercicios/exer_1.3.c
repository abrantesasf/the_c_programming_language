#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%s", "Fahrenheit     Celsius\n");
    printf("%s", "----------------------\n");
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%10.0f      %6.2f\n", fahr, celsius); /* justifica a direita */
        fahr = fahr + step;
    }
  
    return 0;
}
