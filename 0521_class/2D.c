#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[][3] = {{1, 2, 3}, {4, 5, 6}};
    int row, col;
    int i, j;
    int *ptr;
    ptr = n[0];

    row = sizeof(n) / sizeof(n[0]); //calculate the number of rows
    col = sizeof(n[0]) / sizeof(n[0][0]); //calculate the number of columns
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("n[%d][%d] = %X\t n[%d][%d] = %d\n", i, j, ptr, i, j, *ptr++); // *(ptr + i * col + j) = n[i][j]
        printf("\n");
    } //for

    system("pause");
    return 0;
}