#include <stdio.h>
int main(){
    int value =0;
    int input;
    scanf("%d", &input);
    for(int i =1; i<=input;i++){
        if(i%2){
            printf("%d is odd \n", i);
        } else{
            printf("%d is even \n", i);
        }
    };
    return 0;
}