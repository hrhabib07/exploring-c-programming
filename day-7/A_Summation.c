#include <stdio.h>
#include <stdlib.h> 

int main(){
    int a;
    scanf("%d",&a);
    // int arr[a];
    if(a>=1 && a<=100000){
    long long int sum=0;
    for (int i = 0; i < a; i++)
    {   
        long long int num;
        scanf("%lld", &num);
        sum+=num;
    };
    printf("%lld\n", llabs(sum)); 
    }
    return 0;
}