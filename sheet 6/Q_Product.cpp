#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll l,r,m;
    cin>>l>>r>>m;
    ll product = 1;
    for(ll i=l;i<=r;i++)
    {
        product = (product*i)%m;
    }
    cout<<product<<endl;
    return 0;
}