#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n>0 && n<10000)
    {
    int i=0;
    do
    {
        i++;
        if (n%i==0)
        {
            printf("%d \n",i);
        }
        
    } while (i<=n);
    }
    return 0;
}