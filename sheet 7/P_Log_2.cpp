#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll cnt=0;
void logN(int n)
{
    //base case
    if(n==1) return;
    cnt++;
    logN(n/2);
}
int main()
{
    ll n;
    cin>>n;
    logN(n);
    cout<<cnt<<endl;
    return 0;
}