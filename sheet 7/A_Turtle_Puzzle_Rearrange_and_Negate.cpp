#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];// -2 3 -3
        }
        //convert negative value to positive value
        for(int i=0;i<n;i++)
        {
            ar[i] = abs(ar[i]);
        }
        vector<int> prefix(n);
        prefix[0]=ar[0];
        for(int i=1;i<n;i++)
        {
            prefix[i] = ar[i] + prefix[i-1];
        }
        cout<<prefix[n-1]<<endl;
    }
    return 0;
}