#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10, y = 20;
    int temp; //for temporary storage
    int *ptrx, *ptry;

    ptrx = &x; //assign x address to ptrx
    ptry = &y; //assign y address to ptry

    printf("x address = %X\n", &x);
    printf("y address = %X\n", &y);
    printf("ptrx address = %X\n", &ptrx);
    printf("ptry address = %X\n", &ptry);

    printf("Before swapping: ");
    printf("x = %d, y = %d\n", x, y);

    //swap x and y
    temp = *ptrx; //assign x value to temp
    *ptrx = *ptry; //swap -> assign y value to x
    *ptry = temp; //swap x value to y

    printf("After swapping: ");
    printf("x = %d, y = %d\n", x, y);

    system("pause");
    return 0;
}