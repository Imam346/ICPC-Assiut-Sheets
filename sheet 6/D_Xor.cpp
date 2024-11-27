#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,q;
    cin>>a>>b>>q;
    ll ans = q%3;
    if(ans==1) cout<<a<<endl;
    else if(ans==2) cout<<b<<endl;
    else cout<<(a^b)<<endl;
    return 0;
}