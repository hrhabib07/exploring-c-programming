#include <stdio.h>
#include <string.h>
int main(){
    // char text[10000001];
    char text[100];
    scanf("%s", text);
    int val = strlen(text);
    // printf("%d\n", val);
    int count [26]={0};
    for (int i = 0; i < val; i++)
    {
        int index = text[i]-97;
        count[index]++;
    };
    for (int i = 0; i < 26; i++)
    {
        if(count[i]!=0){

        printf("%c - %d \n",i+97, count[i]);
        }
    }
    
    
    return 0;
}