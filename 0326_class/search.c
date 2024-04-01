#include <stdio.h>
#include <stdlib.h>

int main()
{
    int search_num;
    int arr[10] = {13, 56, 78, 23, 78, 56, 89, 90, 23, 90};
    int i = 0;
    int flag = 0;

    printf("Enter a number to search: ");
    scanf("%d", &search_num);

    while (i < 10)
    {
        if (arr[i] == search_num)
        {
            printf("arr[%d] =  %d\n", i, arr[i]);
            flag++;
        }
        i++;
    }
    
    if (flag == 0)
        printf("Number not found\n");

    system("pause");
    return 0;
} //main