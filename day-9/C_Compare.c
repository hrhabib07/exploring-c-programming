#include <stdio.h>
int main(){
    char st1[21], st2[21];
    scanf("%s %s", st1, st2);
    int i = 0;
    while (1)
    {
       if (st1[i]=='\0')
        {
            printf("%s",st1);
            break;
        } else if(st2[i] == '\0'){
            printf("%s", st2);
            break;
        } else if (st1[i]==st2[i])
        {
           i++;
           continue;
        } else if (st1[i]<st2[i])
        {
            printf("%s",st1);
            break;
        } else{
            printf("%s",st2);
            break;
        }     
    }
    
    
    return 0;
}