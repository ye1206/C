#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *fruit[] = {"apple", "banana", "grape"};
    //memory: apple -> 6, banana -> 7, grape -> 6
    //{'a', 'p', 'p', 'l', 'e', '\0'}, {'b', 'a', 'n', 'a', 'n', 'a', '\0'}, {'g', 'r', 'a', 'p', 'e', '\0'}
    int i = 0;

    for (i = 0; i < 3; i++)
    {
        printf("string context: %s\n", fruit[i]); //output the string context
        printf("string address: %X\n", fruit[i]); //output the address of the string
    } 

    system("pause");
    return 0;
}