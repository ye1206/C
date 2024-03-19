#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi = 4 * (1 - (1.0/3) + (1.0/5) - (1.0/7) + (1.0/9)); //圓周率近似值

    printf("pi = %f\n", pi); //印出pi的值, 以浮點數輸出結果

    system("pause"); //暫停畫面
    return 0; 
} //main
