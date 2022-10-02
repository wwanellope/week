#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    scanf("%s",a);
    int i;
    char upper[26],lower[26],up='A',low='a';
    for(i=0;i<26;i++)
    {
        upper[i]=up;
        lower[i]=low;
        up++;
        low++;
    }
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        printf("%c",lower[a[i]-'A']);
        else printf("%c",upper[a[i]-'a']);
    }
    return 0;
}