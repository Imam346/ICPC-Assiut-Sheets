#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n;cin>>n;
    string s;cin>>s;

    int cnt=1;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]!=s[i+1])cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}