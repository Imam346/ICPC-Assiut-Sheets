#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);

    long long int ar[n]; 
    for (int i = 0; i < n; i++) 
    {
        scanf("%lld", &ar[i]);
    }

    for (int i = 0; i < n; i++) {
        long long int fact = 1;
        for (int j = 1; j <= ar[i]; j++) {
            fact=fact*j;
        }
        printf("%lld\n", fact);
    }

    return 0;
}
