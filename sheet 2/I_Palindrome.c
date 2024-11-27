#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int sum=0;
    while(temp != 0)
    {
        int rem=temp%10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    
    if(sum==n)
        {
            printf("%d\nYES",sum);
        }
    else
        {
            printf("%d\nNO",sum);
        }
    return 0;
}