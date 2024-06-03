#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[] = "Cheng"; //{'C', 'h', 'e', 'n', 'g', '\0'}
    char *ptr = num;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++; //*ptr = num -> ptr++ = num + 1
    } //while

    printf("\n");
    system("pause");
    return 0;
}