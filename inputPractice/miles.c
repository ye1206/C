#include <stdio.h>
#include <stdlib.h>

int main()
{
    float miles, km;

    printf("Enter miles: ");
    scanf("%f", &miles);

    km = miles * 1.609; // 1 mile = 1.609km

    printf("km = %.3f\n", km);

    system("pause");
    return 0;
} //main