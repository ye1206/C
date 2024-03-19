#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fa, ce;

    printf("Enter Fahrenheit: ");
    scanf("%f", &fa);

    ce = (fa - 32.0) * (5.0 / 9.0); 

    printf("Celsius = %.2f\n", ce);

    system("pause");
    return 0;
} //main