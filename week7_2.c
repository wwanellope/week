#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[100],last,cure;
    scanf("%s",a);
    int i,num=0,sum=0,cout=0,temp=0;
    last = 'n';
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='0' && a[i]<='9')
        cure = 'n';
        else cure = 'c';
        if(last == 'n' && cure =='n')
        { 
            num = num*10+(a[i]-'0');
            cout++;
        }
        else if(last == 'n' && cure == 'c')
        {
            
            sum+=temp*pow(10,cout)+num;
            num=cout=0;
        }
        else if(last == 'c' && cure == 'n')
        {//printf("%d\n",i);
            temp=a[i]-'0';
            if(i==strlen(a)-1)
            sum+=a[i]-'0';
        }
        if(last == 'n' && cure == 'n' && i == strlen(a)-1)
            sum+=temp*pow(10,cout)+num;
        last = cure;
        //printf("%c",cure);
    }
    if(num!=0)
        sum+=num;
    if(sum<10) printf("000");
    else if(sum<100) printf("00");
    else if(sum<1000) printf("0");
    printf("%d",sum);
    return 0;
}