#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int a,b;
    cin>>a>>b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/(b*1.0))<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/(b*1.0))<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(a/(b*1.0))<<endl;
    return 0;
}