#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n%5==0)
    {
        printf("%d",n/5);
    } else{
        int firstFewSteps = n/5;
        // printf()
        printf("%d",firstFewSteps+1);
    }
    return 0;
}