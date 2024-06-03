#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "National Chi Nan University";
    char *ptr = name;

    printf("指標未移動: %s\n", ptr);

    ptr += 9; //move the pointer to the 10th character
    printf("指標移動9: %s\n", ptr);
    system("pause");
    return 0;
}