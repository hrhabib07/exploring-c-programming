#include <stdio.h>
#include <string.h>

int main(){
    char str[100];  // this is size of the sting
    // fgets(str,20,stdin);
    scanf("%s",str);
    int length = strlen(str);

    printf("%d", length);
    
    // int count=0;
    // for (int i = 0; str[i] !='\0'; i++)
    // {
    //     count++;
    // }
    
    // printf("%d", count);
    return 0;
}