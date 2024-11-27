#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll num1,num2;
    cin>>num1>>num2;
    ll n1 = num1;
    ll n2 = num2;
    while(n2 != 0)
    {
        ll rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    ll lcm = (num1*num2)/n1; //formula-> lcm = (num1*num2)/gcd
    cout<<n1<<" "<<lcm<<endl;
    return 0;
}