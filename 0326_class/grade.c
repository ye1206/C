#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade[18];
    int i = 0;
    int num = 0;
    int sum = 0;
    float avg = 0;

    do
    {
        printf("Enter a grade: ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    } while (grade[i++] > 0); //只要輸入的數字大於0就繼續, grade[i++] > 0是先判斷再加1
    

    avg = (float)sum / (i - 1); //i-1是因為最後一個是0，不算進去

    printf("The average is %.2f\n", avg);

    system("pause");
    return 0;
    
    
}