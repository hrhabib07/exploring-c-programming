#include <stdio.h>
int main (){
    int n;
    int i=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(i==7){
            continue;
        }
        printf("%d \n", i);
    };


    return 0;
}