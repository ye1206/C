#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;

    printf("輸入 10 進制數字: ");
    scanf("%d", &i);
    printf("輸入 8 進制數字: ");
    scanf("%o", &j);
    printf("輸入 16 進制數字: ");
    scanf("%x", &k);

    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("k = %d\n", k);

    printf("i + j + k = %d\n", i + j + k);

    system("pause");
    return 0;
} //main