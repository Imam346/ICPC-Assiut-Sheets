#include<bits/stdc++.h>
using namespace std;
int fun(long long num)
{
    int count = 0;
    while(num%2 == 0)
    {
        count++;
        num = num/2;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    vector<long long>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int result = fun(ar[i]);
        if(result>mx)
        {
            mx = result;
        }
    }
    cout<<mx<<endl;
    return 0;
}