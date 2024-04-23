#include <stdio.h>
#include <stdlib.h>

char grade(int score)
{
    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else
        return 'F';
} //grade


int main()
{
    int score = 0;
    char level = ' ';

    /*do
    {
        printf("Enter your score: ");
        scanf("%d", &score);
        level = grade(score);
        printf("Your grade is %c\n", level); 
    } while (score < 0 || score != 0);*/ //do-while 這邊如果輸入0他會印出F，不符合0為跳出迴圈的要求

    while (1)
    {
        printf("Enter your score: ");
        scanf("%d", &score);
        if (score < 0 || score == 0)
            break;
        level = grade(score);
        printf("Your grade is %c\n", level);
    }
    
    system("pause");
    return 0;
} //main