#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
    int newNum = sqrt(n);// you don't need to iterate all value. 
    if(n>1)
    {
        int count=0;
        for(int i=2;i<=newNum;i++)//
        {
            if(n%i==0)
            {
                count++;
                break;
            } 
        }
        if(count==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else cout<<"NO"<<endl;
}
int main()
{
    int test;
    cin>>test;
    
    for(int t=1;t<=test;t++)
    {
        int n;
        cin>>n;
        fun(n);
    }
    return 0;
}