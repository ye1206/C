#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int row;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    i = 1;

    do
    {
        j = 1;
        do
        {
            if (j <= row - i)
            {
                printf(" ");
            } //if
            else
            {
                printf("*");
            } //else
            j++;
        } while (j <= row);

        printf("\n");
        i++;
    } while (i <= row);
    

    system("pause");
    return 0;
}