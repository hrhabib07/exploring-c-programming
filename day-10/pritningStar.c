#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char arr[n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
            if (j==i-1)
            {
            
            continue;
            }
            
            printf(" ");
        }
        printf("\n");
        
    }
    
    return 0;
}