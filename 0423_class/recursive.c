#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void recur(int _num)
{
    printf("%d\n", _num);
    Sleep(1);
    if (_num == 5)
        exit(5);
    else
        recur(_num + 1);
} //recur

int rec(int _num)
{
    if (_num < 1)
        return 0;
    else
        rec(_num - 1); 
    
    printf("%d\n", _num); //因為是用 stack 的方式儲存，所以 pop 出來是以 FILO 的方式
} //rec

int main()
{ 
    rec(5);
    printf("--------------------\n");
    int num = 1;
    recur(num);
    system("pause");
    return 0;
}