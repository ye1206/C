#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int goal;

    printf("Enter the number of rows: ");
    scanf("%d", &goal);

    for (i = 1; i <= goal; i++)
    {
        for (j = 1; j <= goal - i; j++)
        {
            printf(" ");
        } //for

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        } //for
        printf("\n");
    } //for

    system("pause");
    return 0;
}