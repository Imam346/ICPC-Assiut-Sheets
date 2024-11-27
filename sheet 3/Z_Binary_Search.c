#include<stdio.h>
int fun(int ar[],int n,int data)
{
    int l,r,mid;
    l=0;
    r=n-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(data==ar[mid])
        {
            return mid;
        }
        else if(data>ar[mid])
        {
            l=mid+1;
        }
        else 
        {
            r=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int data;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&data);
    }
    for(int i=0;i<m;i++)
    {
        int result=fun(ar,n,data);
        if(result!=-1)
        {
            printf("found\n");
        }
        else
        {
            printf("not found\n");
        }
    }
    
    return 0;
}