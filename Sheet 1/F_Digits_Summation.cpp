#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long tmp1 = a%10;
    long long tmp2 = b%10;
    long long sum = tmp1+tmp2;
    cout<<sum<<endl;

    return 0;
}