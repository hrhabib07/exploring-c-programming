#include <stdio.h>

long long int sumCalc(long long int *arr, int n, int i){
    if(i==n) return 0;
    return arr[i]+sumCalc(arr,n,(i+1));
}

int main(){
    int n;
    scanf("%d",&n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int total = sumCalc(arr,n,0);
    printf("%lld",total);
    return 0;
}