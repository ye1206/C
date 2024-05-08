#include <stdio.h>
#include <stdlib.h>

void display(int num[], int len)
{
    int i;
    
    for (i = 0; i < len; i++)
    {
        printf("%d =  %p\n", num[i], &num[i]); //%p as print a pointer
    }
} //display

int main()
{
    int data[] = {5, 6, 7, 8, 9};
    int len = sizeof(data) / sizeof(data[0]); //array length
    int i = 0;

    printf("main output\n");
    for (i = 0; i < len; i++)
        printf("%d =  %p\n", data[i], &data[i]);

    printf("輸出 display 函數位址\n");
    display(data, 5);

    system("pause");
    return 0;
}