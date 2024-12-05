#include <stdio.h>
int main(){
    int n;
    int max=0;
    scanf("%d", &n);
   for (int i = 0; n>=1 && i < n && n<=1000; i++)
   {
    int current;
    scanf("%d", &current);
    if(current>max){
        max = current;
    } else{
        continue;
    }
   }
   printf("%d", max);
    return 0;
}