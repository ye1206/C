#include <stdio.h>
#include <stdlib.h>

void sort(int data[])
{
    int i, j, temp;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (data[j] < data[j + 1]) //if data[j] is bigger than data[j+1]
            {
                temp = data[j]; //use temp to store data[j]
                data[j] = data[j + 1]; //swap data[j] and data[j+1]
                data[j + 1] = temp; //set temp to data[j+1]
            } //if
        } //inner-loop
    } //for
} //sort

void display(int data[], int n)
{
    int i;

    if (n == 1) //if n is 1
    {
        printf("排序前: "); 
        for (i = 0; i < 10; i++)
            printf("%d ", data[i]); //print array
        printf("\n");
    } //if
    else if (n == 2) //if n is 2
    {
        printf("排序後: ");
        for (i = 0; i < 10; i++)
            printf("%d ", data[i]);
        printf("\n");
    } //else if
    else //if n is not 1 or 2
        printf("Unknown\n");
} //display

int main()
{
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    display(data, 1); //print array, 1 stands for before sorting
    sort(data); //sort array
    display(data, 2); //print array, 2 stands for after sorting

    system("pause");
    return 0;
}