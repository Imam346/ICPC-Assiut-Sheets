#include<stdio.h>
#define ll long long int
int main()
{
    ll l1,r1,l2,r2;
    scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);

    if(r1>=l2 && r2>=l1)
    {
        ll start = l1 > l2 ? l1:l2;
        ll end = r1 < r2 ? r1:r2;
        printf("%lld %lld\n",start,end);
    }
    else printf("-1");
    return 0;
}