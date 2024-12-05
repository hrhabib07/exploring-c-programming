#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n>=1 && n<=10)
    {
    for (int i = 0; i < n; i++)
    {
        long long int num;
        scanf("%lld", &num);
       do
       {
        long long int digit = num%10;
            printf("%lld ",digit);
            num= num/10;
       } while (num>0);

       
        printf("\n");
    }
    
    }
    
    return 0;
}