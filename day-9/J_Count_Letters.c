#include <stdio.h>
#include <string.h>
int main(){
    char *text = (char *)malloc(10000001 * sizeof(char));
    if (text == NULL) {
    printf("Memory allocation failed\n");
    return 1;
    }
    scanf("%s", text);
    int val = strlen(text);
    int count [26]={0};
    for (int i = 0; i < val; i++)
    {
        int index = text[i]-97;
        count[index]++;
    };
    for (int i = 0; i < 26; i++)
    {
        if(count[i]!=0){

        printf("%c : %d\n",i+97, count[i]);
        }
    }
    
    
    return 0;
}