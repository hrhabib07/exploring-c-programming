#include <stdio.h>
int maxMin (int * arr,int n, int j){
    int max=arr[j], min=arr[j];
    for (int i = 0; i < n; i++)
    {
    if(arr[i]>max){
        max = arr[i];
    } if(arr[i]<min){
        min = arr[i];
    };
    }
    printf("%d %d",min,max);
    // (i==n-1) return;
    // if(arr[i]>max){
    //     max = arr[i];
    // } if(arr[i]<min){
    //     min = arr[i];
    // };
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };
    maxMin(arr,n,0);
    
    return 0;
}