#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int i,j=0,m,k,l=0,p=0;
    char a[n*n],b[n*n-1];
    for(i=0;i<n*n;i++)
        a[i]='x';
    for(i=0;i<n*n-1;i++)
        b[i]='.';
    for(i=0;i<t;i++)
        a[i]='.';
    for(i=n*n-1;i>=n*n-1-t;i--){
        b[i]='x';
        //printf("%c\n",b[i]);
        a[n*n-1]='x';
    }
    m=2*n-1;
    for(i=0;i<=n-1;i++)
    {
        for(k=0;k<i;k++)
            printf(" ");
        for(j=i*2;j<n*2-1;j++){
            printf("%c",a[l]);
            l++;}
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(k=n-1;k>i;k--)
            printf(" ");
        for(l=0;l<=i*2;l++){
            printf("%c",b[p]);
            p++;}
        printf("\n");
    }
}