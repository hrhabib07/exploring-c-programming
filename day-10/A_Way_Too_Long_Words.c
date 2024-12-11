#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char st[100];
        char st2[100];
        scanf("%s", st);
        int length = strlen(st);
        if (length>10)
        {
            st2[0]=st[0];
            st2[1]=length;
            st[2]=st[length-1];
        }

        if (strlen(st2)>1)
        {
            for (int i = 0; i != '\n'; i++)
            {
                printf("%s", st)
            }
            
        } else{
          printf("%s",st);
        }
        
        

    }
    
    return 0;
}