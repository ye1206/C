#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3][3] = {{4, 5, 8}, {6, 10, 2}, {12, 9, 5}}; // 3D array
    int i = 0, j = 0, k = 0;
    int max = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                if (arr[i][j][k] > max)
                    max = arr[i][j][k];
            } //for (8, 2,5)
        } //for (5, 10, 9)
    } //for (4, 6, 12) 

    printf("Max: %d\n", max);

    system("pause");
    return 0;
}