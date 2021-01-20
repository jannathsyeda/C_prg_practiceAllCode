#include<stdio.h>
int main()
{
    int row,col, i,j,  arr[10][10], transpose[10][10];
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
    printf("\nMatrix Output:\n");
    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
        printf("\n");
    }

     printf("\nTranspose Matrix Output:\n");
    for(int i = 0; i< col; i++)
    {
        for(int j=0; j<row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
/*
3 2
5 6
5 2
7 8
*/


