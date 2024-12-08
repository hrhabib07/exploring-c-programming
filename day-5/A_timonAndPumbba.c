#include <stdio.h>
int main(){
    long long int a, b;
    scanf("%lld", &a);
    scanf("%lld", &b);
    if(a-b>=0){
        printf("%lld", a-b);
    } else{
        printf("%d", 0);
    }
    return 0;
}