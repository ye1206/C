#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi = 3.1415926; //圓周率近似值
    float r = 5; //半徑
    float area  = pi * r * r; //面積

    printf("圓面積為 = %f\n", area); //印出圓面積

    system("pause"); //暫停畫面
    return 0;
} //main
