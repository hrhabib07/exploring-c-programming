#include <stdio.h>
int main(){
    char ch; 
    scanf("%c",&ch);
    int ascValue=(int) ch;
    if(ascValue == 122){
        printf("%c",'a');
    } else{

    int nextAscValue=ascValue+1;
    char nextCh =(char) nextAscValue;
    // printf("%d \n", ascValue);
    printf("%c", nextCh);
    }
    return 0;
}