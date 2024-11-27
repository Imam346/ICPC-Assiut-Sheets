#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool is_prime(ll n)
{
    if (n <= 1)
        return false;
        
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll n;
    cin >> n;

    if (is_prime(n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
