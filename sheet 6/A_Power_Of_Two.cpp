#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    bool flag = false;
    for(ll i=1;i<=n;i=i*2)
    {
        if(i==n)
        {
            flag = true;
            break;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}