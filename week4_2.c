#include <stdio.h>

int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    int i,j,k,temp=0;
    for(i=1;i<n;i++)
    {
        for(k=0;k<i-1;k++)
            printf(" ");
        for(j=n;j>=i;j--)
        {
            if(temp<t)
            printf(".");
            else
            printf("x");
            ++temp;
        } 
        for(j=i;j<n;j++)
        {
            if(temp<t)
            printf(".");
            else
            printf("x");
            ++temp;
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        if(i==n)
        printf("x");
        else
        printf(" ");
    }
    printf("\n");
    temp=(n*n-t)-1;
    for(i=1;i<n;i++)
    {
        for(k=n-1;k>i;k--)
            printf(" ");
        for(j=1;j<=i+2;j++)
        {
            if(temp>=1)
            printf(".");
            else
            printf("x");
            --temp;
        }
        for(j=i;j>1;j--)
        {
            if(temp>=1)
            printf(".");
            else
            printf("x");
            --temp;
        }
        printf("\n");
    }

    return 0; 
}