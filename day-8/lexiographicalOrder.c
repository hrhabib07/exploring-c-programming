#include <stdio.h>
#include <string.h>
int main(){
    char arr1[100];
    scanf("%s", arr1);
    char arr2[100];
    scanf("%s", arr2);
    int lengAr1 = strlen(arr1);
    int lengAr2 = strlen(arr2);
    int i =0;
    while (1)
    {
        if (arr1[i] == arr2[i])
        {
            if (arr1[i] =='\0' && arr2[i] =='\0'){
            printf("Same \n");
            break;
        } else {
            i++;
            continue;
            }
            
        }
          else if (arr1[i]<arr2[i])
        {
            printf("Small: %s \n", arr1);
            break;
        } else if (arr1[i]>arr2[i])
        {
            printf("Small: %s \n", arr2);
            break;
        }
        
          
        else if (arr1[i] =='\0')
        {
            printf("Small: %s \n", arr1);
            break;
        } else if (arr2[i] == '\0')
        {
            printf("Small: %s \n", arr2);
            break;
        } 
        i++;
    }
    


    return 0;

}