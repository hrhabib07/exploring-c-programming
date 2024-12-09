#include <stdio.h>
#include <string.h>
int main(){
    char str1[1000];
    scanf("%s", str1);
    char str2[1000];
    scanf("%s", str2);
    int lengStr1 = strlen(str1);
    int lengStr2 = strlen(str2);
    printf("%d %d\n", lengStr1, lengStr2);
    printf("%s %s", str1, str2); 
    return 0;
};