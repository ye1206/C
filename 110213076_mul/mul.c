#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1[3][3] = {{2, 5, 6}, {8, 5, 4}, {3, 8, 6}};
    int num2[3][3] = {{56, 8, 9}, {76, 55, 2}, {6, 2, 4}};
    int result[3][3];
    int i = 0, j = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            result[i][j] = num1[i][j] * num2[i][j];

        for (j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    system("pause");
    return 0;
}