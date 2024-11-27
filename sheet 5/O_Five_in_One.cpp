#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(int num)
{
    int tmp = num;
    int sum = 0;
    while(tmp != 0)
    {
        int rem = tmp%10;
        sum = sum*10 + rem;
        tmp = tmp/10;
    }
    if(num==sum)return true;
    else return false;
}
int divisors(int num)
{
    int cnt = 0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>mx)
        {
            mx = ar[i];
        }
        if(ar[i]<mn)
        {
            mn = ar[i];
        }
    }
    cout<<"The maximum number : "<<mx<<endl;
    cout<<"The minimum number : "<<mn<<endl;
    sort(ar,ar+n);
    int prime = 0;
    int palindrome = 0;
    for(int i=0;i<n;i++)
    {
        if(check_palindrome(ar[i]))
        {
            palindrome++;
        }
        int m = ar[i]/2;
        int cnt = 0;
        for(int j=2;j<=m;j++)
        {
            if(ar[i]%j==0)
            {
                cnt++;
                break;
            }
        }
        if(cnt==0 && ar[i] != 1)
        {
            prime++;
        }
    }
    cout<<"The number of prime numbers : "<<prime<<endl;
    cout<<"The number of palindrome numbers : "<<palindrome<<endl;
    
    int max;
    int indx;
    for(int i=0;i<n;i++)
    {
        int c = divisors(ar[i]);
        if(i==0)
        {
            max = c;
            indx = i;
        }
        else
        {
            if(c>=max)
            {
                max = c;
                indx = i;
            }
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<ar[indx]<<endl;
    return 0;
}