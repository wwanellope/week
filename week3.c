#include <stdio.h>

int main()
{
    char a[1000];
    int l=0,i,lower=0,upper=0;
    scanf("%s",a);
    while(a[l]!='\0')
    l++;
    for(i=0;i<l;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        upper++;
        else if(a[i]>=97 && a[i]<=122)
        lower++;
    }
    printf("Uppercase:%d\nLowercase:%d",upper,lower);
    return 0;
}