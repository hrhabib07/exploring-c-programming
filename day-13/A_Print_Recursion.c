#include <stdio.h>
void printFun(int n){
    if(n==0) return;
    printf("I love Recursion\n");
    printFun(n-1);
}
int main(){
    int n;
    scanf("%d", &n);
    printFun(n);
    return 0;
}