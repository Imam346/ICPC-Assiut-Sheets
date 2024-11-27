#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    string a="hello";
    string b;cin>>b;

    bool ok=false;
    int i=0;
    for(char c:b)
    {
        if(c==a[i])
        {
            i++;
            if(i==a.size())
            {
                ok=true;
                break;
            }
        }
    }

    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}