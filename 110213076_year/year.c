#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter a year: "); 
    scanf("%d", &year);

    if (year % 4 == 0) //先除以 4 判斷
    {
        if (year % 100 == 0) //如果能夠被 100 整除
            printf("%d 年不是閏年\n", year); // 則不是閏年
        else //否則是閏年
            printf("%d 年是閏年\n", year);
    } //if
    else if(year % 100 ==0)
    {
        if (year % 400 == 0)
            printf("%d 年是閏年\n", year);
    } //else if
    else if (year % 400 == 0) //如果能夠被 400 整除
        printf("%d 年是閏年\n", year); //則是閏年
    else
        printf("%d 不是閏年\n", year); //否則不是閏年

    system("pause");
    return 0;
} //main