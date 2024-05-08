#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int *i, *j;

    printf("請輸入兩個數字: ");
    scanf("%d %d", &a, &b);

    i = &a;
    j = &b;

    printf("a 的值: %d\n", a);
    printf("a 的地址: %p\n", &a);
    printf("透過 pointer 取得 address -> %X\n", &*i);
    printf("透過 pointer 取得 value =  %d\n", *&a);

    printf("b 的值: %d\n", b);
    printf("b 的地址: %p\n", &b);
    printf("透過 pointer 取得 -> %X\n", &*j);
    printf("透過 pointer 取得 value =  %d\n", *&b);

    system("pause");
    return 0;   
}