#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//pbds
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

bool prime[51]={0,0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0};
int32_t main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(prime[n]==1) cout<<"prime"<<endl;
        else cout<<"not prime"<<endl;
    }
    return 0;
}

/*

f(1)=0     ... 1 number index er fibo er value not prime
f(2)=1     ... 2 number index er fibo er value not prime
f(3)=1     ... 3 number index er fibo er value not prime
f(4)=2     ... 4 number index er fibo er value prime
f(5)=3     ... 5 number index er fibo er value prime
f(6)=5     ... 6 number index er fibo er value prime
f(7)=8     ... 7 number index er fibo er value not prime
f(8)=13    ... 8 number index er fibo er value prime
f(9)=21    ... 9 number index er fibo er value not prime
f(10)=34   ... 10 number index er fibo er value not prime
.........      ..........................................

*/