#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double digit = 0;
    for(int i=2;i<=n;i++)
    {
        digit = digit+log10(i);
    }
    int ans = floor(digit)+1;
    cout<<"Number of digits of "<<n<<"! "<<"is "<<ans<<endl;
    return 0;
}