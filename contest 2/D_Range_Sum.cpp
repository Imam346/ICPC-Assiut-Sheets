#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;

        ll sum = ((r-l+1) * (l+r))/2;
        cout<<sum<<endl;
    }
    return 0;
}