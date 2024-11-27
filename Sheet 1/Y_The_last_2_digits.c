#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    
    long long int mul=((long long)a*b*c*d)%10000;
    long long int temp = mul%100;
    printf("%02lld\n",temp);
    
    return 0;
}