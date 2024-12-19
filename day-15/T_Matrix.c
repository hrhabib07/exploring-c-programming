#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    };
    int sumPrimary = 0;
    int sumSecondary = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                sumPrimary+=arr[i][j];
            }
            if (i+j==n-1)
            {
                sumSecondary+=arr[i][j];
            }
            // printf("%d ",arr[i][j]);
        }
        // printf("\n");
    }
    int totalSum = abs(sumPrimary-sumSecondary);
    printf("%d", totalSum);
    return 0;
}