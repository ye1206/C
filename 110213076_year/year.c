#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter a year: "); 
    scanf("%d", &year);

    if (year % 4 !=0)
        printf("%d 不是閏年\n", year); //不被4整除，則不為閏年
    else if (year % 100 != 0)
        printf("%d 是閏年\n", year); //被4整除，但不被100整除，則為閏年
    else if (year % 100 == 0 && year % 400 != 0)
        printf("%d 是閏年\n", year); //被100整除，但不被400整除，則不為閏年
    else if (year % 400 == 0)
        printf("%d 是閏年\n", year); //被400整除，則為閏年
    else
        printf("%d 不是閏年\n", year); //其他情況，則不為閏年

    system("pause");
    return 0;
} //main