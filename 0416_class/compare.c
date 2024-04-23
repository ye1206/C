#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "國立暨南國際大學";
    char str2[] = "國立暨南國際大學";
    char str3[] = "國立暨南國際大學 資訊管理學系";

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("The two strings are the same.\n");
    else
        printf("The two strings are different.\n");

    result = strcmp(str3, str1);

    if (result == 0)
        printf("The two strings are the same.\n");
    else if (result > 0)
    {
        printf("The two strings are different.\n");
        printf("The first string is greater than the second string.\n");
    }
    else
    {
        printf("The two strings are different.\n");
        printf("The first string is less than the second string.\n");
    }        

    system("pause");
    return 0;
}