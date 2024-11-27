#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0)
        {
            cnt++;
        }
        else
        {
            cout<<ar[i]<<" ";
        }
    }
    for(int i=0;i<cnt;i++)
    {
        cout<<0<<" ";
    }
    return 0;
}