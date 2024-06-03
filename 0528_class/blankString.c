#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str[3] = {};
    char s[80];    
    int i = 0;

    for (i = 0; i < 3; i++)
        printf("%X: &s\n", str[i], str[i]);
    
    str[0] = "NCNU";
    str[1] = "IM";
    str[2] = "Student";

    for (i = 0; i < 3; i++)
        printf("%X: %s\n", str[i], str[i]);

    system("pause");
    return 0;
}