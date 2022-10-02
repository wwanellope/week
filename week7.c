#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[100],b[100];
    scanf("%s",a);
    int l=strlen(a),sum=0,k=0,temp,n=0,c[4];
    for(int i=0;i<l;i++)
    {  
        if(a[i]>='0' && a[i]<='9')
        {
            int j=i;
            while(a[j]>='0' && a[j]<='9')
            {  
                b[k]=a[j];
                j++;
                k++;//printf("%d\n",j);
            }
            temp=0;
            for(int m=0;m<k;m++)
            {
                temp = temp*10+(b[m]-'0');
                
            }
            sum +=temp;
            
            i+=k-1;
            k=0;
        }
    }
    temp=sum;
    while(temp!=0)
    {
        temp/=10;
        n++;
    }
    n=4-n;
    for(int i=0;i<4;i++)
    {
        if(n!=0)
        {
            c[i]=0;
            n--;
        }
        else
        {
            c[i]=sum/(pow(10,3-i));
            sum-=c[i]*pow(10,3-i);
        }
    }
    for(int i=0;i<4;i++) printf("%d",c[i]);
    return 0;
}