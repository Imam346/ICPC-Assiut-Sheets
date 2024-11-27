#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,r;
    cin>>n>>r;
    ll res = 1;
    for(int i=0;i<r;i++)
    {
        res = res*(n-i);
        res = res/(i+1);
    }
    cout<<res<<endl;
    return 0;
}
/*
NcR = n!/r!(n-r)!
*/