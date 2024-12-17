#include <stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    if (row != col)
    {
        printf("Not a square matrix. So it can't be a diagonal Matrix.");
    } else{
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &arr[i][j]);
            }
            
        }
        int count=0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if(i+j==row-1 && arr[i][j]!=0){
                    count++;
                } else if(i+j!=row-1 && arr[i][j]!=0){
                    count--;
                }
                // scanf("%d", &arr[i][j]);
            }
        }
        if(count==row){
            printf("Secondary diagonal matrix");
        } else{
            printf("Not Secondary diagonal matrix");
        }
        
    }
    
    return 0;
}