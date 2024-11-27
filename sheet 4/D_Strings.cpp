#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    int sz1=a.size();
    int sz2=b.size();
    cout<<sz1<<" "<<sz2<<endl;
    string c = a+b;
    cout<<c<<endl;

    // swap(a[0],b[0]); //swap using function
    //swap using temporary variable
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    cout<<a<<" "<<b<<endl;
    return 0;
}