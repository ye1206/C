#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chi[] = "國立暨南國際大學 資訊管理學系";
    char eng[] = "Department of Information Management, National Chi Nan University";

    printf("字串 1 長度: %d\n", strlen(chi));
    printf("字串 2 長度: %d\n", strlen(eng));
    
    system("pause");
    return 0;
}