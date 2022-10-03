#include<iostream>
#include<cstring>

using namespace std;

void reverse(char *str)
{
    int i=0,n=strlen(str)-1;
    while(i<=n)
    {
        swap(str[i],str[n]);
        i++;
        n--;
        //cout << n <<endl<<i<<endl;
    }
}

int main()
{
    char a[100];
    cin >> a;
    reverse(a);
    cout << a;
}