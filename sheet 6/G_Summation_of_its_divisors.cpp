#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll sum = 0;//1+16+2+8+4 = 31
                     //4
    for(ll i=1;i<=sqrt(n);i++)//16=1,2,4,8,16
    {
        if(n%i==0)
        {
            sum += i;//1+2+4+
             //4 != //4
            if(i != sqrt(n))
            {
                sum += n/i;//16+8+
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}