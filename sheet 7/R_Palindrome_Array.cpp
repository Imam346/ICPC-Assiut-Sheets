#include<bits/stdc++.h>
using namespace std;
bool flag = true;

void fun(int n,int i,vector<int>& ar,vector<int>& v)
{
    //base case
    if(i==n) return;
    fun(n,i+1,ar,v);
    v.push_back(ar[i]);
}
void check(vector<int>& ar,vector<int>& v,int n,int i)
{
    //base case
    if(i==n)return;
    if(ar[i] != v[i])
    {
        flag = false;
        return;
    }
    check(ar,v,n,i+1);
}
int main()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    vector<int> v;
    fun(n,0,ar,v);
    check(ar,v,n,0);

    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}