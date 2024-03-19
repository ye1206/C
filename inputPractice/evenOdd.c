#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);

    system("pause");
    return 0;
} //main