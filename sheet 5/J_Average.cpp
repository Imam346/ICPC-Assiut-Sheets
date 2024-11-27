#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<float>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i*1.0];
    }
    double d = 0;
    for(int i=0;i<n;i++)
    {
        d = d+v[i];
    }
    double result = d/n;
    cout<<fixed<<setprecision(7)<<result<<endl;
    return 0;
}