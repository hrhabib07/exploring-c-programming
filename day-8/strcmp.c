#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    int r = strcmp(str1, str2);
    if (r<0)
    {
        printf("%s", "First String is smaller");
    } else if (r>0)
    {
        printf("%s", "Second String is smaller");
    } else{
        printf("%s", "Both Strings are same");
    }
    
    
    // printf("%d",r);
    return 0;
}