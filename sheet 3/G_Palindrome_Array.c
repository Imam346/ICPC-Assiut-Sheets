#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int tempAr[n];
    for(int i=0;i<n;i++)
    {
        tempAr[i]=ar[n-1-i];// Copy elements in reverse order
    }
    long long int flag=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=tempAr[i])
            {
                flag=1;
                break;
            }
    }
    
    if(flag==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}