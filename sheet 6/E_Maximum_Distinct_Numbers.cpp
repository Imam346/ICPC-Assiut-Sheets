#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll num;
    cin>>num;
    for(ll i=1;;i++)
    {
        if(i>num)
        {
            cout<<i-1<<endl;
            return 0;
        }
        else num = num-i;
    }
    return 0;
}