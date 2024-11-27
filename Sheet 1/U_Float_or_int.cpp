#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    double f; cin>>f;
    double decimal = f - static_cast<int>(f);
    if(decimal>0)
        cout<<"float "<<(int)f<<" "<<decimal<<endl;
    else cout<<"int "<<(int)f<<endl;
    return 0;
}