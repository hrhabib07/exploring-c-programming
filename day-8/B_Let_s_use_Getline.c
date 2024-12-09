#include <stdio.h>
#include <string.h>
int main(){
    char str[1000000];
    fgets(str,1000000,stdin);
    char outString[1000000];
    for (int i = 0; str[i] !='\\'; i++)
    {
        outString[i] = str[i];
    }
    
    printf("%s", outString);

    return 0;
}