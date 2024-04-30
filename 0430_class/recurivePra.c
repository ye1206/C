#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void recur(int _num)
{
    printf("%d\n", _num);
    //Sleep(1);
    if (_num == 5)
        exit(5);
    else
        recur(_num + 1); //ascending
} //recur

int rec(int _num)
{
    if (_num < 1)
        return 0;
    else
        rec(_num - 1); //descending

    printf("%d\n", _num); 
    //Stack -> FILO -> input order: 5.4.3.2.1 -> output order: 1.2.3.4.5
}

int main()
{
    int num = 1;
    int num1 = 5;
    rec(num1);
    printf("--------------------\n");
    recur(num); //ascending
    system("pause");
    return 0;
}