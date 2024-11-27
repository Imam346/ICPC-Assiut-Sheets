#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    if(a>0 && b>0)
    {
        
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}