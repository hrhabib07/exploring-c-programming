#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long int srcArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &srcArr[i]);
    };
    long long int target;
    scanf("%lld", &target);
    int found = -1;
    for (int i = 0; i < n; i++)
    {
        if (srcArr[i] == target)
        {
            found = i;
            break;
        }
    };
    printf("%d", found);    
    
    return 0;
}