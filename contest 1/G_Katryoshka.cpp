//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll con_3=min({a,b,c});
    a -= con_3, b -= con_3, c -= con_3;
    a = (a/2);
    ll con_1 = min(a,c);
    a -= con_1, c -= con_1;
    a = (a/2);
    ll con_2 = min({a,b,c});

    ll ans = (con_1+con_2+con_3);
    cout<<ans<<endl;
    return 0;
}