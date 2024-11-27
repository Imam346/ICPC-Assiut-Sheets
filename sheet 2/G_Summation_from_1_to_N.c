// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     long long int sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     printf("%lld",sum);
//     return 0;
// }

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    //formula for any sum: n*(n+1)/2
    long long int sum = ((long long int)n * (n + 1)) / 2;//prevent integer overflow.
    printf("%lld", sum);
    
    return 0;
}
