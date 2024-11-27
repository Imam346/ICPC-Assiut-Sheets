#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag = false;
    while(n--)
    {
        string s;
        cin>>s;
        int a = s.find("010");
        int b = s.find("101");
        if(a != string::npos || b != string::npos)//it means that "010" or "101" is found.
        {
            cout<<"Good"<<endl;
        }
        else cout<<"Bad"<<endl;
    }
    
    return 0;
}