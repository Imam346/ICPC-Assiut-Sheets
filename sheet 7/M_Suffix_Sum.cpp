#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> ar(n);
    for(ll i=0;i<n;i++) cin>>ar[i];
    vector<ll> sufix(n);
    sufix[n-1]=ar[n-1];
    for(ll i=n-2;i>=0;i--)
    {
        sufix[i] = ar[i] + sufix[i+1];
    }
    reverse(sufix.begin(),sufix.end());
    cout<<sufix[m-1]<<endl;
    return 0;
}