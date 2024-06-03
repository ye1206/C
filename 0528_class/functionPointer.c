#include <stdio.h>
#include <stdlib.h>

int add(int *p1, int *p2)
{
    return *p1 + *p2; 
} //add

int main()
{
    int x, y;
    //int sum = 0;
    int *ptrx, *ptry; 

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    ptrx = &x;
    ptry = &y;

    //sum = add(ptrx, ptry);
    printf("sum = %d\n", add(ptrx, ptry));

    //亦可寫成 add(&x, &y)

    system("pause");
    return 0;
}