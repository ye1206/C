#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[][3] = {{1, 2, 3}, {4, 5, 6}};
    int row, col;
    int i, j;

    row = sizeof(n) / sizeof(n[0]); //calculate the number of rows
    col = sizeof(n[0]) / sizeof(n[0][0]); //calculate the number of columns

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("n[%d][%d] = %d, address = %X\n", i, j, *(*(n + i) + j), *(n + i) + j);
            // *(n + i) -> address of n[i][0], *(n + i) + j -> address of n[i][j]
            // *(*(n + i) + j) -> value of n[i][j]
        printf("\n");
    } //for
    system("pause");
    return 0;
}