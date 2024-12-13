#include <stdio.h>
int main(){
    double x= 2.56;
    double * ptr = &x;
    double * ptr2 = ptr;

    // *ptr = 3.42;
    // *ptr2 = 5.42;
    printf("x er value %.2lf \n", x);
    printf("x er value %.2lf \n", ptr);
    printf("x er address %p\n", ptr);
    // printf("%p", ptr);
    return 0;
}