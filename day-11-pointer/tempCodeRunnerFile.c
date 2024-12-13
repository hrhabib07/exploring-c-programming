#include <stdio.h>
int main(){
    double x= 2.56;
    int *ptr = &x;
    printf("%p", ptr)
    return 0;
}