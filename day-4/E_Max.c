#include <stdio.h>
int main(){
    int n;
    int max=0;
    scanf("%d", &n);
   for (int i = 0; i < n; i++)
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