#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n,&m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    };
    
    int greater;
    if(n>m){
        greater=n;
    }  else
    {
        greater=m;
    }

    int count[greater];
    for (int i = 0; i < greater; i++)
    {
        count[i]=0;
    };

    for (int i = 0; i < n; i++)
    {
        int val = arr[i]-1;
        count[val]++;
    }
    

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", count[i]);
    }
    
    
    
    
    return 0;
}