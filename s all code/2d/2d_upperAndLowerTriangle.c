#include<stdio.h>
int main()
{
    int row,col, i,j,  arr[10][10], transpose[10][10], sum=0;
    printf("Enter row & col: ");
    scanf("%d %d", &row, &col);
    printf("Enter First Matrix: \n");
    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if( j > i){
                sum += arr[i][j];
            }
        }
    }
    printf("Sum of Upper Triangle Is: %d\n", sum);
    sum = 0;

    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if( i > j){
                sum += arr[i][j];
            }
        }
    }
    printf("Sum of Lower Triangle Is: %d\n", sum);


}
/*
3 3
5 6 5
5 2 6
7 8 7
*/

