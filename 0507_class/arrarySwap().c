#include <stdio.h>
#include <stdlib.h>

void swap(int data[])
{
    int temp;
    int i = 0;
    temp = data[0];
    data[0] = data[1];
    data[1] = temp;

    for (i = 0; i < 2; i++)
        printf("%d -> %p\n", data[i], &data[i]);
} 

int main()
{
    int num[2];
    int x = 5, y = 1;
    int i = 0;
    printf("execute 2 line\n");
    num[0] = x;
    num[1] = y;
    for (i = 0; i < 2; i++)
        printf("%d -> %p\n", num[i], &num[i]);

    printf("swap\n");
    swap(num);
    system("pause");
    return 0;
}