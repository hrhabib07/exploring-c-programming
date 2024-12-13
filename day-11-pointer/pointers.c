#include <stdio.h>
int main(){
    int x =10;
    int * ptr = &x;
    printf("x er value - %d \n", x);
    printf("x er memory - %p \n", &x);
    printf("ptr er value - %p \n", ptr);
    printf("ptr er memory - %p \n", &ptr);
    printf("ptr er value in int %d \n", ptr);
    printf("ptr er memory size - %d \n", sizeof(ptr));
    x=20;
    // dereferencing 
    printf("x er value - %d \n", x);
    printf("x er value - %d \n", *ptr);
    
    // x=200 leka je kotha *ptr=200 leka same kotha 
    // bujso?

    *ptr=30;
    // dereferencing 
    printf("x er value - %d \n", x);
    printf("x er value - %d \n", *ptr);
    // int * ptr = &x;

    return 0;
}