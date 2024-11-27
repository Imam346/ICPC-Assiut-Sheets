#include<bits/stdc++.h>
using namespace std;
bool fun(int x)
{
    while(x != 0)
    {
        int tmp=x%10;
        if(tmp != 4 && tmp != 7)
        {
            return false;
        }
        x=x/10;
    }
    return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    bool flag = false;
    for(int i=a;i<=b;i++)
    {
        // if(fun(i))//shortcut
        // {
        //     cout<<i<<" ";
        //     flag = true;
        // }
        bool f = fun(i);//longcut
        if(f==true)
        {
            cout<<i<<" ";
            flag = true;
        }
    }
    if(flag==false)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}