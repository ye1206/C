#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;
    char c;

    printf ("a's address = %p\n", &a); //start address
    printf("sizeof(a) = %d\n", sizeof(a));
    printf ("b's address = %p\n", &b);
    printf("sizeof(b) = %d\n", sizeof(b));
    printf ("c's address = %p\n", &c);
    printf("sizeof(c) = %d\n", sizeof(c));

    system("pause");
    return 0;
}