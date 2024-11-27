#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int dp[N];
int fibo(int n)
{
    //base case
    //we know, 1 tomo value er man 0 & 2 tomo value er man 1
    if(n==1) return 0;
    else if(n==2) return 1;
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans = fibo(n-1)+fibo(n-2);
    dp[n]=ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fibo(n)<<endl;
    return 0;
}