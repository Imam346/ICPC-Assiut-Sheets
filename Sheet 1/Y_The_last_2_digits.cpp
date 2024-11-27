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
    //The last K digits of N is just N % 10^K
    ll ans = ((a%100) * (b%100) * (c%100) * (d%100)) % 100;
    
    // Print the result with leading zero if necessary
    cout<<setw(2)<<setfill('0')<<ans<<endl;
    return 0;
}
