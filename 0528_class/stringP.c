#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20]; //不可以初始化陣列!不然會error
    char *ptr = name;

    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Hi! %s\n", ptr);
    system("pause");
    return 0;
}