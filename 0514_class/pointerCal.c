#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x = 10.0;
    double *ptrx;
    int y = 10;
    int *ptry;

    ptrx = &x;
    printf("ptr address = %X\n", ptrx);
    ptrx++; //ptr 遞增
    printf("ptr address = %X\n", ptrx);
    ptrx--; //ptr 遞減
    printf("ptr address = %X\n", ptrx);
    
    ptry = &y;
    printf("ptr address = %X\n", ptry);
    ptry += 3; //ptr + 3
    printf("ptr address = %X\n", ptry);
    ptry -= 3; //ptr - 3
    printf("ptr address = %X\n", ptry);

    system("pause");
    return 0;
}