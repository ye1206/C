#include <stdio.h>
#include <stdlib.h>

void time(float num, int time, float result)
{
    for (int i = 1; i <= time; i++)
    {
        if (i == 1)
            result = num;
        else
            result *= num;
    } //for
    printf("%.2f ^ %d = %.2f\n", num, time, result);
} //time

int main()
{
    float num = 0, result = 0;
    int times = 0;

    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Enter the number of times: ");
    scanf("%d", &times);

    time(num, times, result); 

    system("pause");
    return 0;
}