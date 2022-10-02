#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    scanf("%s",a);
    int j=0;
    for(int i=strlen(a)-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(int i=0;i<strlen(a);i++)
    printf("%c",b[i]);
    return 0;
}