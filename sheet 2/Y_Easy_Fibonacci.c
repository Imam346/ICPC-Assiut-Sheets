#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first=0,second=1,count=0,fibo;
    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo = first+second;
            first = second;
            second = fibo;
        }

        //space control
        if(count==0)
            {
                printf("%d",fibo);
            }
        else
            {
                printf(" %d",fibo);
            }
            
        count++;
    }
    return 0;
}