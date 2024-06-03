#include <stdio.h>
#include <stdlib.h>

double PI = 3.14159;

float area(float *area, int r)
{
    *area = PI * r * r;
    return *area;
} //area

float circum(float *length, int r)
{
    *length = 2 * PI * r;
    return *length;
} //len

void circle(float *cir, float *length, int r)
{
  *cir = PI * r * r;
  *length = 2 * PI * r;
}

int main()
{
    int r;
    float cir, length;
    //warning: 變數名稱不要跟function一樣

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    //printf("r = %d, area = %.2f, length = %.2f\n", r, area(&cir, r), circum(&length, r));
    circle(&cir, &length, r);
    printf("r = %d, area = %.2f, length = %.2f\n", r, cir, length);

    system("pause");
    return 0;
}