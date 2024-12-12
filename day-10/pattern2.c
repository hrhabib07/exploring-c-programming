#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i=i+2)
    {
         int space = n-i;
        for (int k = 0; k < space; k=k+2)
        {
            printf("%c",' ');
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%c",'*');
        }
       
            printf("%c",'\n');
        
    }
    
    return 0;
}