#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if(a>=b){
        printf("%s","Yes\n");
    } else{
        printf("%s", "No\n");
    }
    return 0;
}