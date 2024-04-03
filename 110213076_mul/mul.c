#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1[3][3] = {{2, 5, 6}, {8, 5, 4}, {3, 8, 6}};
    int num2[3][3] = {{56, 8, 9}, {76, 55, 2}, {6, 2, 4}};
    int result[3][3] = {0}; // Initializing the result matrix with 0
    int i = 0, j = 0, k = 0;

    for (i = 0; i < 3; i++) //control the rows of the result matrix
    {
        for (j = 0; j < 3; j++) //control the columns of the result matrix
        {
            for (k = 0; k < 3; k++) 
                result[i][j] += num1[i][k] * num2[k][j]; // Multiplying the two matrices
        } //inner-for

        for (j = 0; j < 3; j++)
            printf("%d ", result[i][j]); // Printing the result matrix
        
        printf("\n");
    } //for

    system("pause");
    return 0;
}