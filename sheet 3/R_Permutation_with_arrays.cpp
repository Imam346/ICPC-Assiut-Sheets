#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        sum1+=a[i];
    }
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        sum2+=b[i];
    }
    
    if(sum1==sum2)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}