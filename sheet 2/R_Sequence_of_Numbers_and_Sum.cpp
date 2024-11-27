#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        int n,m;
        cin>>n>>m;
        if(n<=0 || m<=0)
        {
            break;
        }
        
        int sum=0;
        for(int i=min(m,n);i<=max(m,n);i++)
        {
            cout<<i<<" ";
            sum=sum+i;
        }

        cout<<"sum ="<<sum<<endl;
    }
    return 0;
}