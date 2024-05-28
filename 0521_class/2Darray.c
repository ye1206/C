#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[][3] = {{1, 2, 3}, {4, 5, 6}};
    int row, col;
    int i, j;

    row = sizeof(n) / sizeof(n[0]); //calculate the number of rows
    col = sizeof(n[0]) / sizeof(n[0][0]); //calculate the number of columns

    printf("row = %d, col = %d\n", row, col);
    printf("n[i][j] 格式的記憶體位址\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("n[%d][%d] = %X\t", i, j, &n[i][j]); // &n[i][j] = n[i] + j
        printf("\n");
    }

    printf("n[i]+j 格式的記憶體位址\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("n[%d]+%d = %X\t", i, j, n[i] + j); // n[i] + j = &n[i][j]
        printf("\n");
    }

    system("pause");
    return 0;
}