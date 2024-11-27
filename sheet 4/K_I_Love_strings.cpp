#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int j=1;j<=test;j++)
    {
        string s,t;
        cin>>s>>t;
        int minLenth = min(s.size(),t.size());
        string ans ;
        for(int i=0;i<minLenth;i++)
        {
            ans +=s[i];
            ans +=t[i];
        }
        //If the length of S is greater than the length of T 
        for(int i=minLenth;i<s.size();i++)
        {
            ans +=s[i];
        }
        //If the length of T is greater than the length of S
        for(int i=minLenth;i<t.size();i++)
        {
            ans +=t[i];
        } 
        cout<<ans<<endl;
    }
    
}