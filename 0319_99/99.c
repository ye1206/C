#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 0;
    int sum;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            sum = i * j;
            printf("%d * %d = %d\n", i, j, sum);
        }
    }
    system("pause");
    return 0;
}