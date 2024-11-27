//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    long double x = (a*b)/c;
    ll num = x;
    double float_val = x-num;
    if(float_val>0) {cout<<"double\n";}
    else if(x<=2147483647) {cout<<"int\n";}
    else {cout<<"long long\n";}
    return 0;
}