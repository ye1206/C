#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5];
    int sum = 0;
    int i = 0;
    int *ptr = num; //pointer for array

    printf("Please enter 5 numbers: ");
    for (i = 0; i < 5; i++)
        scanf("%d", ptr + i);  //store the value

    for (i = 0; i < 5; i++)
        sum += *(ptr + i); // sum += ptr[i]

    printf("Sum = %d\n", sum); //print the sum

    system("pause");
    return 0;
}