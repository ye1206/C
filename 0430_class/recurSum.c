#include <stdio.h>
#include <stdlib.h>

int Sum(int _num)
{
    if (_num == 1) 
        return 1; //when n = 1, Sum(1) = 1
    else
        return _num + Sum(_num - 1); //Sum(n) = n + Sum(n - 1)
    /*
    Still store as stack, input order: Sum(5) -> Sum(1) without calculate completely
    So when n = 1, return 1 to Sum(2) = 2 + Sum(1) and so on until Sum(5) = 5 + Sum(4)
    */
} //Sum

/*
The reason why Sum function cannot use void: void function has no return value, 
and according to the nature of recursion, the Sum function must have a return value, 
so it cannot use void 
*/

int main()
{
    printf("Sum(5) = %d\n", Sum(5));
    system("pause");
    return 0;
}