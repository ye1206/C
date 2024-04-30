#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palindrome(int _num)
{
    char next;

    if (_num <= 1) //when the number is less than or equal to 1, print the character
    {
        next = getchar();
        printf("\n");
        putchar(next); //print the character
        //Stack, input order: palindrome(5) -> palindrome(1)
    } //if
    else
    {
        next = getchar(); //get the next character
        palindrome(_num - 1); //recursion
        putchar(next); //print the character
    } //else
} 

int main()
{
    int i = 5;
    printf("Please enter a string: ");
    palindrome(i);
    printf("\n");
    system("pause");
    return 0;
}