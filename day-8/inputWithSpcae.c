#include <stdio.h>
int main(){
    char name[10];
    // gets(name);
    fgets(name, 10, stdin);
    // int sz = sizeof(name);
    // printf("%d\n", sz);
    printf("%s", name);

    return 0;
}