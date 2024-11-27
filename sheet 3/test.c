#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int tempAr[n];
    for(int i=n-1;i>=0;i--)
    {
        tempAr[i]=ar[i];
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==tempAr[i])
            {
                flag=1;
            }
    }
    
    if(flag==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}