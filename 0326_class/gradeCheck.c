#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade[5];
    int i = 0;
    int sum = 0;
    float avg = 0;

    do
    {
        printf("Enter a grade: ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    } while ((grade[i++] > 0) && (i < 5)); 
    // 只要輸入的數字大於 0 或 i < 5 就繼續, grade[i++] > 0是先判斷再加1

    if (i >= 5) // 陣列已經滿了
    {
        printf("Array is full\n");
        avg = (float)sum / i; // i 是5
        printf("The average is %.2f\n", avg);
    } //if
    else
    {
        avg = (float)sum / (i - 1); // i-1是因為最後一個是0，不算進去
        printf("The average is %.2f\n", avg);
    } //else    

    system("pause");
    return 0;
}