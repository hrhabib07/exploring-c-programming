#include <stdio.h>
int main(){
    int num;
    int pos=0;
    int neg=0;
    int even=0;
    int odd=0;
    scanf("%d", &num);

    for(int i=1; num>1 && i<=num && num<=1000;i++){
        
        int scanNum;
        scanf("%d", &scanNum);
        if(scanNum<0 && scanNum%2==0){
            neg++;
            even++;
        } else if (scanNum<0 && scanNum%2!=0)
        {
            neg++;
            odd++;
        } else if (scanNum>0 && scanNum%2==0)
        {
            pos++;
            even++;
        }  else if (scanNum>0 && scanNum%2!=0)
        {
            pos++;
            odd++;
        } else if (scanNum==0)
        {
            even++;
        }   
    };

    printf("Even: %d \n", even);
    printf("Odd: %d \n", odd);
    printf("Positive: %d \n", pos);
    printf("Negative: %d \n",neg);
    return 0;
}