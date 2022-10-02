#include <stdio.h>
#include <string.h>

int letter[52];

int character(char a[1000])
{
    //int letter[52];
    int upper=0,lower=0;
    for(int i = 0;i < strlen(a);i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            letter[a[i]-'A']++;
            //printf("%c = %d\n",a[i],letter[a[i]-'A']);
        }
        
        else
        {
            letter[a[i]-'a'+26]++;
            //printf("%c = %d\n",a[i],letter[a[i]-'a'+26]);
        }
        
    }
    for(int i=0;i<26;i++)
    {
        if(letter[i]==0) continue;
        upper+=letter[i];
    }
    for(int i=26;i<52;i++)
    {
        if(letter[i]==0) continue;
        lower+=letter[i];
        //printf("%d\n",lower);
    }
    printf("uppercase : %d \nlowercase : %d",upper,lower);
}

int main()
{
    char a[1000];
    gets(a);
    character(a);
    return 0;
}