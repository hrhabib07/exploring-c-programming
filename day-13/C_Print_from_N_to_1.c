#include <stdio.h>
void printNto1(int n){
    if(n==0) return;
    if(n==1){
    printf("%d",n);
    } else{
    printf("%d ",n);
    }
    printNto1(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printNto1(n);
    return 0;
}