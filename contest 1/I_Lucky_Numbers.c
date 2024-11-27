#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
#define ll long long
int main()
{
    int n; scanf("%d",&n);
    int a = n%10;
    n=n/10;
    int b = n%10;
    // printf("%d %d\n",a,b);
    if(a%b==0 || b%a==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}