#include <stdio.h>

void fun (int i,int j){
    if(i>j) return;
    printf("%d ",i);
    fun(i+1, j);
//    for (int i = 1; i <= n; i++)
//    {
//     printf("%d ", i);
//    }  
}

int main(){
    int n;
    scanf("%d", &n);
    fun(1,n);
    return 0;
}