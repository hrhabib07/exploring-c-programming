#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int ind;
    scanf("%d", &ind);
    for (int i = ind; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    };
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}