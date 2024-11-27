#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    char c; scanf("%c",&c);
    
    if(c>='0' && c<='9')
        printf("IS DIGIT\n");
    else
    {
        if(c>='A' && c<='Z')
            printf("ALPHA\nIS CAPITAL\n");
        else printf("ALPHA\nIS SMALL\n");
    }
    return 0;
}