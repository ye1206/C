#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int i;

    for (i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
            sum += i;
        else
            continue;
    } //for

    printf("sum = %d\n", sum);

    system("pause");
    return 0;
}