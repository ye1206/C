#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, val;
    int *ptr;

    i = 20; //assign 20 to i
    ptr = &i; //assign i address to ptr
    val = *ptr; //ptr gets i value and assign to val

    printf("*ptr = %d\n", *ptr);
    printf("val = %d\n", val);
    printf("i address = %p\n", &i);
    printf("ptr address = %p\n", &ptr);
    printf("val address = %p\n", &val);

    system("pause");
    return 0;
}