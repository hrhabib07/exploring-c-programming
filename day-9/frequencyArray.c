#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    };
    int count[4] = {0};
    for (int i = 0; i < n; i++)
    { 
        int val = a[i];
        count[val]++;
        // printf("%d\n", a[i]);
    };
    for (int i = 0; i < 4; i++)
    {
        printf("%d - %d \n",i, count[i]);
    }
    
    
    return 0;
}