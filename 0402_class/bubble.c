#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {3, 6, 5, 7, 9};
    int i = 0, j = 0;
    int temp = 0;
    int flag = 0;

    for (i = 1; i < 5; i++)
    {
        flag = 1;
        for (j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            } //if
        } //inner-loop

        if (flag)
            break;
        printf("Round %d: ", i);
        for (j = 0; j < 5; j++)
            printf("%d ", arr[j]);
        printf("\n");        
    } //for

    system("pause");
    return 0;
}
