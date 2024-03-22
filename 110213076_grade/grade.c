#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stu; //學生人數
    printf("輸入學生人數： ");
    scanf("%d", &stu);

    int grade; //成績
    int fail; //不及格人數
    int sum = 0; //總分
    float avg = 0; //平均分數
    int i = 0;

    for (i = 1; i <= stu; i++)
    {
        printf("輸入第%d位學生的成績： ", i);
        scanf("%d", &grade);

        if (grade < 60) //小於60分為不及格
        {
            sum += grade; //總分計算
            fail++; //不及格人數計算
        } //if
        else
            sum += grade;
    } //for

    avg = (float)sum / stu; //平均分數計算

    printf("平均分數是：%.2f\n", avg);
    printf("不及格人數：%d\n", fail);

    system("pause");
    return 0;
    
} //main