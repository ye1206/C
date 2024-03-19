#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int i1, i2, i3; //短整數宣告
    short j1, j2, j3; // 短整數宣告 只是省略 int
    
    i1 = 32767; // 2^15 - 1
    i2 = i1 + 1;
    i3 = i2 - 1;

    printf("i1 = %d\n", i1);
    printf("i2 = %d\n", i2);
    printf("i3 = %d\n", i3);

    j1 = 32767;
    j2 = j1 + 1;
    j3 = j2 - 1;
    printf("j1 = %d\n", j1);
    printf("j2 = %d\n", j2);
    printf("j3 = %d\n", j3); 

    system("pause");
    return 0;
} //main