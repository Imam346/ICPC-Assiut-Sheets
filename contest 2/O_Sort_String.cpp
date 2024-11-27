#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> freq(26,0);

    for(char c:s)
    {
        int cnt=c-'a';//if c=a, then 97-97=0
        freq[cnt]++;
    }

    int index=0;
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<freq[i];j++)
        {
            s[index] = i+'a'; //0+97=a
            index++;
        }
    }
    cout<<s<<"\n";
    return 0;
}