#include <stdio.h>
int main(){
    int sum =0;
    int n;
    int i;
   scanf("%d", &n);
    for(i=1; i<=10; i++){
        sum = sum+i;
    };
    printf("%d",sum);
    return 0;
}