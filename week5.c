#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s",str);
    for(int i=strlen(str) ; i>=1 ; i--)
    {
        for(int j=0;j<i;j++)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}