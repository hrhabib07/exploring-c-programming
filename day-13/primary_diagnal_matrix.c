#include <stdio.h>
int main(){
    int row, col;
    scanf("%d %d",&row, &col);
    int arr[row][col];
    if (row != col)
    {
        printf("Not a square Matrix. So this is not a diagonal matrix.");
    } else{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0;j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int count =0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0;j < col; j++)
        {
            if (i==j && arr[i][j] !=0)
            {
               count++;
            } else if (arr[i][j] != 0)
            {
                count--;
            }
        }
    }
    if (count == row)
    {
        printf("Diagonal Matrix");
    }
    else{
        printf("Not a Diagonal Matrix");
    }
    }
    
    return 0;
}