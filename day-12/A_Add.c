#include <stdio.h>
int sum(int i, int j){
    return i+j;
}
int main(){
    int n,m;
    scanf("%d %d", &n,&m);
    int res = sum(n,m);
    printf("%d", res);
    return 0;
}