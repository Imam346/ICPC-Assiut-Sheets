#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    char str[n];
    int i=0;
    while(cin>>str[i])//EOF
    {
        i++;
    }
    //selection sort
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
                char temp=str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
 
    for (int i=0; i<n; i++)
    {
        cout << str[i];
    }
 
    return 0;
}