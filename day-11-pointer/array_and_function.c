#include <stdio.h>

int fun(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int dob = arr[i]*2;
        printf("%d ",dob);
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    } 
    int size= sizeof(arr)/sizeof(int);
    fun(arr, size);
    // printf("%d", size); 
    return 0;
}