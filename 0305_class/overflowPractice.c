#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long int i1, i2, i3; //長整數宣告 (unsigned 代表無負數)
    long int j1, j2, j3; // 長整數宣告 

    // 4294967295
    // 2147483647
    
    i1 = 4294967295; // 2^32 - 1
    i2 = i1 + 1;
    i3 = i2 - 1;

    printf("i1 = %lu\n", i1);
    printf("i2 = %lu\n", i2);
    printf("i3 = %lu\n", i3);

    j1 = 2147483647; // 2^31 - 1
    j2 = j1 + 1;
    j3 = j2 - 1;

    printf("j1 = %d\n", j1);
    printf("j2 = %d\n", j2);
    printf("j3 = %d\n", j3);

    system("pause");
    return 0;
} //main