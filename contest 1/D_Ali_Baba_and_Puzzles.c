#include<stdio.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
#define ll long long
int main()
{
    ll a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    // printf("%lld %lld %lld %lld",a,b,c,d);
    if((a+b-c)==d) {printf("YES\n"); return 0;}
    if((a+b*c)==d) {printf("YES\n"); return 0;}
    if((a-b+c)==d) {printf("YES\n"); return 0;}
    if((a-b*c)==d) {printf("YES\n"); return 0;}
    if((a*b+c)==d) {printf("YES\n"); return 0;}
    if((a*b-c)==d) {printf("YES\n"); return 0;}
    //cannot get fourth number
    printf("NO\n");
    return 0;
}