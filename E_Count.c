#include <stdio.h>
#include <string.h>
int main(){
    char str[1000000];
    scanf("%s", str);
    int sz = strlen(str);
    int sum=0;
    for (int i = 0; i < sz; i++)
    {
        int value = str[i] - '0';
       sum = sum+value;
    }
    printf("%d", sum);
    
    return 0;
}