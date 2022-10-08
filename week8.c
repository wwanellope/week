#include <stdio.h>

int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;

}

int main()
{
    int n,f;
    scanf("%d",&n);
    f=factorial(n);
    printf("%d",f);
    return 0;
}