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
    for(int i=1;i<=n;i++){
        if(n%i==0) printf("%d\n",i);
    }
    return 0;
}