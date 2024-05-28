#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[3];
    int arr[5] = {3, 6, 7, 5, 9};
    int i;

    printf("請輸入3個整數：");
    for (i = 0; i < 3; i++)
        scanf("%d", num + i);

    printf("您輸入的3個整數是：");
    for (i = 0; i < 3; i++)
        printf("%d", num[i]);

    printf("\n");

    printf("%X\t%X\t%X\n", &num[0], &num[1], &num[2]); // 3個元素的記憶體位置
    printf("%X\t%X\t%X\n", num, num + 1, num + 2); //num 可以是一種pointer的概念

    printf("-----------------------\n");

    for (i = 0; i < 5; i++)
        printf("arr[i] = %d, *(arr + i) = %d\n", arr[i], *(arr + i));


    system("pause");
    return 0;
}