#include <stdio.h>

void hello(){

    printf("hello start \n");
    printf("hello \n");
    printf("hello end \n");
    world();
};
void world(){
    printf("world start \n");
    printf("world \n");
    printf("world end \n");
}

int main(){
    printf("main start \n");
    hello();
    printf("main end \n");
    return 0;
}