#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, j = 1;
    int sum;

    /*for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            sum = i * j;
            printf("%d * %d = %d\n", i, j, sum);
        }
    }*/

    while (i <= 9)
    {
        j = 1;
    
        while (j <= 9)
        {
            sum = i * j;
            printf("%d * %d = %d\n", i, j, sum);
            j++;
        } //while

        i++;
    } //while

    system("pause");
    return 0;
}