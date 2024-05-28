#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *p, **ptr;

    p = &x;
    ptr = &p;

    printf("x = %d, &x = %X\n", x, &x);

    printf("p = %X, &p = %X, *p = %d\n", p, &p, *p); 
    //&p -> address of p, p -> address of x, *p -> value of x

    printf("ptr = %X, &ptr = %X, *ptr = %X, **ptr = %d\n", ptr, &ptr, *ptr, **ptr);
    //&ptr -> address of ptr, ptr -> address of p, *ptr -> value of p, **ptr -> value of x
    system("pause");
    return 0;
}