#include <stdio.h>
#include <stdlib.h>

int Swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2; //swap -> assign p2 value to p1
    *p2 = temp; //swap p1 value to p2

    //swap x and y (Old version)
    //temp = *ptrx; //assign x value to temp
    //*ptrx = *ptry; //swap -> assign y value to x
    //*ptry = temp; //swap x value to y

    return *p1, *p2;
}

int main()
{
    int x, y;
    int *ptrx, *ptry;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    ptrx = &x; //assign x address to ptrx
    ptry = &y; //assign y address to ptry
    printf("x address: %X\n", ptrx); //print x address
    printf("y address: %X\n", ptry); //print y address
    //printf("x address: %X\n", &x); //print x address
    //printf("y address: %X\n", &y); //print y address
    printf("-----------------------\n");
    printf("Before swapping: x = %d, y = %d\n", *ptrx, *ptry); //print x and y value
    //printf("Before swapping: x = %d, y = %d\n", x, y); //print x and y value
    Swap(ptrx, ptry); //swap x and y
    printf("After swapping: x = %d, y = %d\n", *ptrx, *ptry); //print x and y value after swapping
    //printf("After swapping: x = %d, y = %d\n", x, y); //print x and y value after swapping

    system("pause");
    return 0;
}