#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "DeepMind";
    char str2[10];
    int i = 0;
    int len = strlen(str1);

    for (i = 0; i < len; i++)
        str2[i] = str1[i];
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    system("pause");
    return 0;
}