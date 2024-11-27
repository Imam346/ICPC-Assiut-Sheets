#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    
    long long int result1=1;
    for(int i=0;i<b;i++)
    {
        result1=result1*a;
    }
    long long int result2=1;
    for(int i=0;i<d;i++)
    {
        result2=result2*c;
    }
    if(result1>result2)
        {
            printf("YES\n");
        }
    else{
        printf("NO\n");
    }
    return 0;
}