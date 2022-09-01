#include <stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    int upper=0,lower=0;
    gets(a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        upper++;
        else if(a[i]>='a'&&a[i]<='z')
        lower++;
    }
    printf("Uppercase:%d\nLowercase:%d",upper,lower);
    return 0;
}