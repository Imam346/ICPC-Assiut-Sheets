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
    int a,b;
    scanf("%d %d",&a,&b);
    if((a-b)>=0) printf("%d",(a-b));
    else printf("0");
    return 0;
}