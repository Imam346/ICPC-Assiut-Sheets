#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    int cnt = n*(n+1)/2;
    cout<<cnt<<endl;
    return 0;
}