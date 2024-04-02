#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start = 0; // start number
    int diff = 0; // 
    int arr[4][4];
    int i = 0, j = 0;
    int sum = 0;
    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the minus number: ");
    scanf("%d", &diff);

    printf("Original\n");
    // array initialization
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if ((i == 0) && (j == 0))
                arr[i][j] = start;
            else
                arr[i][j] = arr[i][j - 1] + diff;
        } //inner-for
        for (j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    } //for

    /*for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            arr[i][j] = start;
            start += diff;
        } //inner-for
        for (j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    } //for */


    printf("After\n");

    sum = arr[0][0] + arr[3][3];

    for (i = 0, j = 0; i < 4; i++, j++) //from left-top to right-bottom
        arr[i][j] = sum - arr[i][j];
    for (i = 0, j = 3; i < 4; i++, j--) //from right-top to left-bottom
        arr[i][j] = sum - arr[i][j];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    } //for
    
    system("pause");
    return 0;
}