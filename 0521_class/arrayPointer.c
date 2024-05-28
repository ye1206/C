#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[] = {3, 6, 7, 5, 9};
    int *ptr;
    int i, len;
    int sum = 0;

    ptr = num;
    printf("num address = %X\n", num);
    printf("ptr address = %X\n", ptr);
    len = sizeof(num) / sizeof(num[0]);
    for (i = 0; i < len; i++)
        sum += *ptr++; 
        // ptr++ 會讓 ptr 指向下一個元素，因為有額外宣告一個變數(len)所以不會影響原本的指標 
        // ->移動的是另一個變數而不是ptr本身
        // -> ptr可以++

    printf("Array Sum = %d\n", sum);
    printf("num address = %X\n", num);
    printf("ptr address = %X\n", ptr);

    printf("-----------------------\n");

    ptr = num;
    for (i = 0; i < len; i++)
        sum += *(ptr + i); 
        // ptr + i 會讓 ptr 指向下一個元素，但是會影響原本的指標 
        // -> ptr不可以++
        
    printf("Array Sum = %d\n", sum);
    printf("num address = %X\n", num);
    printf("ptr address = %X\n", ptr);

    system("pause");
    return 0;
}