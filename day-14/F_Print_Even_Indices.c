#include <stdio.h>

void printEven(int ar[], int n){
    if(n%2==0){
        printf("%d ", ar[n]);
    };
    if (n==0) return;
    printEven(ar, n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printEven(arr, n-1);
    return 0;
}