#include <stdio.h> 

int main() {
    long long int sum = 0; 
    int n;
    int i;

    scanf("%d", &n); 
    for (i = 1; i <= n; i++) {
        sum = sum + i; 
    }
    printf("%lld", sum);
    return 0; 
}
