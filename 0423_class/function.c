#include <stdio.h>
#include <stdlib.h>

int add(int num1, int num2, int result)
{
    result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result);
    return result;
} //add

void add1(int a, int b, int sum)
{
    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
} //add1

int main()
{
    int num1 = 0, num2 = 0, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    //result = add(num1, num2, result);
    //printf("%d + %d = %d\n", num1, num2, result);
    add1(num1, num2, result);

    system("pause");
    return 0;
}