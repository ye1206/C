#include <stdio.h>
#include <stdlib.h>

void add(int _num1, int _num2)
{
    int result = 0;
    result = _num1 + _num2;
    printf("%d + %d = %d\n", _num1, _num2, result);
} //add

void multiply(int _num1, int _num2)
{
    int result = 0;
    result = _num1 * _num2;
    printf("%d * %d = %d\n", _num1, _num2, result);
} //multiply

int main()
{
    int choice = 0;
    int num1 = 0, num2 = 0;
    printf("1. Add\n2. Multiply\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice != 1 || choice != 2)
    {
        printf("Invalid choice\n");
        exit(2); //force to exit the program
    } 
        
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (choice == 1)
        add(num1, num2);
    else if (choice == 2)
        multiply(num1, num2);

    system("pause");
    return 0;
}