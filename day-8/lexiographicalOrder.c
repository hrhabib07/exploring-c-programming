#include <stdio.h>
#include <string.h>
int main(){
    char arr1[100];
    scanf("%s", arr1);
    char arr2[100];
    scanf("%s", arr2);
    int lengAr1 = strlen(arr1);
    int lengAr2 = strlen(arr2);
    if(lengAr1<lengAr2){
        lengAr1 = lengAr2;
    }
    for (int i = 0; i < lengAr1 ; i++)
    {
        arr2[i] = arr1[i];
    };

    printf("%s %s", arr1, arr2);
    


    return 0;

}