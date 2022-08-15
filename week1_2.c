#include <stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    gets(a);
    int l=strlen(a) ,i;
    for(i=0;i<l;i++)
    {
        if(a[i]<=90) printf("%c",a[i]+32);
        else printf("%c",a[i]-32);
    }
    return 0;
}