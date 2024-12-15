#include <stdio.h>
int main(){
    int n = 3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    };
    int sorterArray[3];
    for (int i = 0; i < n; i++)
    {
        sorterArray[i] = arr[i];
    };

    if (sorterArray[0]>sorterArray[1])
    {
        int temp = sorterArray[0];
        sorterArray[0] = sorterArray[1];
        sorterArray[1] = temp;
    }
    if (sorterArray[1]>sorterArray[2])
    {
        int temp = sorterArray[1];
        sorterArray[1] = sorterArray[2];
        sorterArray[2] = temp;
    }
    for (int  i = 0; i < n; i++)
    {
           printf("%d\n", sorterArray[i]);
          
    }
    printf("\n");
    for (int  i = 0; i < n; i++)
    {
           printf("%d\n", arr[i]);
          
    }
    
    
    return 0;
}