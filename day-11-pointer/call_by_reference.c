#include <stdio.h>

void fun (int *p){
    printf("p er value - %p\n",p);
    printf("p er address - %p\n",&p);
    // mojar bisoy x er value eikane bose change kroa jay
    *p=20;
}
int main(){
    int x = 10;
    printf("x er value - %d\n",x);
    printf("x er address - %p\n",&x);
    fun(&x);
    printf("x er value - %d\n",x);
    printf("x er address - %p\n",&x);
    return 0;
}