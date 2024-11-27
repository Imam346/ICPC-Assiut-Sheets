#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b*log2(a) > d*log2(c))
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}