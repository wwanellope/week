#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int l=strlen(str),i,j,t=strlen(str)-1;
    char temp[l][l];
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            //printf("%d %d\n",j,t);
            if(j>t)
            {
                temp[i][j]='\0';
                continue;
            }
            temp[i][j]=str[j];
        }
        t--;
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%c",temp[i][j]);
        }
        printf("\n");
    }
    return 0;
}