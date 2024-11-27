#include<bits/stdc++.h>
using namespace std;
int ar[105];
int n;
long long sum = 0;
void fun(int n,int i)
{
    if(i==n) return;
    sum += ar[i];
    fun(n,i+1);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>ar[i];
    fun(n,0);
    double avg = sum/n;
    cout<<fixed<<setprecision(6)<<avg<<endl;
    return 0;
}