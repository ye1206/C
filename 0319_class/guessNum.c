#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    srand(time(NULL));
    int ran = rand() % 100 + 1;
    int guess = 0;

    do
    {
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num > ran)
        {
            printf("Too high\n");
            guess++;
        }
        else if (num < ran)
        {
            printf("Too low\n");
            guess++;
        }
        else
        {
            printf("You got it!\n");
            printf("You guessed %d times\n", guess);
            break;
        }

    } while (num != ran);
    
    
    system("pause");
    return 0;
}