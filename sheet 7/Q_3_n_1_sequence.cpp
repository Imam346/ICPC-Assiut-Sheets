#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void check(long long n)
{
    cnt++;
    //base case
    if(n==1) return;
    if(n%2==0) check(n/2);
    else check(3*n+1);
}
int main()
{
    int n;cin>>n;
    check(n);
    cout<<cnt<<endl;
    return 0;
}