#include <stdio.h>
#include <stdlib.h>

int square(int *p)
{
    return *p * *p;
} //square

int main()
{
    int x;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &x);

    ptr = &x; //ptr 指向 x
    printf("Before square: %d\n", *ptr); //get x value
    printf("After square: %d\n", square(ptr)); //use square to get x^2

    //printf("x^2 = %d\n", square(&x)); 

    system("pause");
    return 0;
}