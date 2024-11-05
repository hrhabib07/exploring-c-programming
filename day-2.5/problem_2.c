// You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

#include<stdio.h>
int main(){

    int num1, num2;
    printf("give your first number : ");
    scanf("%d",&num1);
    printf("give your second number : ");
    scanf("%d", &num2);
    printf("your given first number is : %d",num1);
    printf("\nYour given second number is : %d",num2);
    printf("\nYour sum is : %d",num1+ num2);

    return 0;
}



// For example:
// Inputs are 5 and 2
// Then you’ll give output as:
// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50
