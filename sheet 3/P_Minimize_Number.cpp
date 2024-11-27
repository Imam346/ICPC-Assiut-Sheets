#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int cnt=0;
    while(true)
    {
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(ar[i]%2 != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
        {
            for(int i=0;i<n;i++)
            {
                ar[i] = ar[i]/2;
            }
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}