#include <stdio.h>

int main() {
    long long n;
    int count = 0;
    
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) return 1; 
    
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count = 0;
            while (n % i == 0) {
                count++;
                n /= i;
            }
            printf("Factor: %lld, Count: %d\n", i, count);
        }
    }
    
    if (n > 1) {
        printf("Factor: %lld, Count: 1\n", n);
    }
    
    return 0;
}