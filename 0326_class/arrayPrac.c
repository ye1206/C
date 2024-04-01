#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[4] = {45, 67, 12, 89};
    int arr2[5];
    int i = 0;
    int max = 0, max2 = 0, max3 = 0;

    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int* arr3 = malloc(size * sizeof(int));
    printf("--------------------------------\n");
    
    for (i = 0; i < 4; i++)
    {
        if (i == 0)
            max = arr1[i];
        else 
        {
            if (arr1[i] > max)
                max = arr1[i];
        } //else
    }
    printf("The biggest element in array1 is: %d\n", max);
    printf("--------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr2[i]);

        if (i == 0)
            max2 = arr2[i];
        else 
        {
            if (arr2[i] > max2)
                max2 = arr2[i];
        } //else
    } 
    printf("The biggest element in array2 is: %d\n", max2);
    printf("--------------------------------\n");

    for (i = 0; i < size; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr3[i]);

        if (i == 0)
            max3 = arr3[i];
        else 
        {
            if (arr1[i] > max3)
                max3 = arr3[i];
        } //else
    }
    printf("The biggest element in array3 is: %d\n", max3);
    
    system("pause");
    return 0;
}