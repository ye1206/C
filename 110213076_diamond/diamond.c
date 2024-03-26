#include <stdio.h>
#include <stdlib.h>

int main()
{
    int leng; //菱形的大小
    int i, j; 

    printf("輸入長度： ");
    scanf("%d", &leng);

    for (i = 1; i <= leng; i++) //上半部
    {
        for (j = 1; j <= leng - i; j++) //空白，計算空白的數量
        {
            printf(" ");
        } //for

        for (j = 1; j <= i; j++) //星星，非空白部分就是星星的位置
        {
            printf("* ");
        } //for

        printf("\n");
    } //for

    for (i = leng - 1; i >= 1; i--) //下半部
    {
        for (j = 1; j <= leng - i; j++) //空白
        {
            printf(" ");
        } //for

        for (j = 1; j <= i; j++) //星星
        {
            printf("* ");
        } //for
        printf("\n");
    } //for

    system("pause");
    return 0;
} //main