#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int sum[3][3];
    int i = 0, j = 0;

    printf("輸入第一個陣列\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &arr1[i][j]);
    } //for

    printf("輸入第二個陣列\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &arr2[i][j]);
    } //for

    printf("兩個陣列相加\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        } //for
        printf("\n");
    } //for

    system("pause");
    return 0;
} //main