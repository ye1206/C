#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 6;
    int *ptr;

    ptr = &x; //get x address
    
    printf("x = %d / %d\n", x, *ptr);
    printf("x address = %p / %p\n", &x, ptr);
    // printf("透過 pointer 取得 -> %d\n", *ptr); //get x value
    printf("pointer address = %p\n", &ptr); //get pointer address

    system("pause");
    return 0;
}