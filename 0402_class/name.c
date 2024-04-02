#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = {'C', 'h', 'e', 'n', 'g'};
    char name1[] = "Cheng";

    printf("字元的位元組: %d\n", sizeof(name));
    printf("字串的位元組: %d\n", sizeof(name1));

    system("pause");
    return 0;
}