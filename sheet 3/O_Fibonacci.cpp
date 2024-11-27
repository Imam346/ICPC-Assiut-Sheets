#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,b=1,cnt=0,n,fibo;
    cin>>n;
    long long int x;
    while(cnt < n)
    {
        if(cnt <= 1)
        {
            fibo = cnt;
            x=fibo;
        }
        else
        {
            fibo = a+b;
            x=fibo;
            a=b;
            b=fibo;
        }
        cnt++;
    }
    cout<<x<<endl;
    return 0;
}