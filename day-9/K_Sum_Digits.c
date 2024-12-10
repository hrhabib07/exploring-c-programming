#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char num[n];
    scanf("%s", num);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int current = num[i]-'0';
        sum+= current; 
    }
        printf("%d \n",sum);
    
    return 0;
}