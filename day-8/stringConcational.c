#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100];
    scanf("%s %s", a, b);
    char c[200];
    for (int i = 0; a[i] !='\0'; i++)
    {
        c[i] = a[i];
    };
    int lenA = strlen(a);
    int count = 0;
    for (int i = lenA-1; b[count] !='\0'; i++)
    {
        c[i] = b[count];
        count++;
    };  
    printf(c);
    return 0;
}