#include <stdio.h>

int main()
{
    char a[100],l=0,i;
    scanf("%s",a);
    while(a[l]!='\0')
    l++;
    for(i=0;i<l;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]+=32;
            printf("%c",a[i]);
        }
        else
        {
            a[i]-=32;
            printf("%c",a[i]);
        }
    }
    return 0;
}