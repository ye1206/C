#include <stdio.h>
#include <stdlib.h>

int fac(int _num)
{
    int i = 0;
    int sum = 1;
    for (i = 1; i <= _num; i++)
    {
        sum *= i;
        printf("%d! = %d\n", i, sum);
    }

    return sum;
} //fac

int recFac(int _num)
{
    int sum;
    if (_num == 1)
        sum = 1;
    else
        sum =  _num * recFac(_num - 1);
} //recFac

int main()
{
    fac(5);
    printf("------------------\n");
    printf("5! = %d\n", recFac(5));
    system("pause");
    return 0;
}