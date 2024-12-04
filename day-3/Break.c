#include <stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    for(int i=1; i<=number; i++){
        printf("%d \n",i);
        if(i==19){
            break;
        }
            };
    return 0;
}