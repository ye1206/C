#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int *ptr;
    int i, count;

    ptr = num;
    printf("請輸入整數的個數：");
    scanf("%d", &count);

    for (i = 0; i < count; i++)
    {
        printf("請輸入元素內容: ");
        scanf("%d", ptr++); // ptr++ 會讓 ptr 指向下一個元素
    }

    ptr = num;
    for (i = 0; i < count; i++)
        printf("num[%d] = %d\n", i, *(ptr + i)); // ptr + i 會讓 ptr 指向下一個元素

    system("pause");
    return 0;
}