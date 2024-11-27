#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int a,b,c;
    cin>>a>>b>>c;
    int mx = max({a,b,c});
    int mn = min({a,b,c});
    cout<<mn<<" "<<mx<<endl;
    return 0;
}