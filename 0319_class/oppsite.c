#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num)
    {
        printf("%d", num % 10);
        num = num / 10;
    } //while

    printf("\n");
    

    system("pause");
    return 0;
}