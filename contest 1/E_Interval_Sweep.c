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
    int a,b; scanf("%d %d",&a,&b);
    if(abs(a-b)>1) printf("NO\n");
    else printf("YES\n");
    return 0;
}