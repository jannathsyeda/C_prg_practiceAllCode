#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter row & col: ");
    scanf("%d %d", &row, &col);
    int arr1[row][col], arr2[row][col], arr3[row][col];
    printf("Enter First Matrix: \n");
    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nEnter Second Matrix: ");
    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }


    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j] ;
        }
    }


    printf("\nAfter add 1 & 2: \n");
    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }




}
/*
3 3
5 6 9
5 2 8
7 8 2

3 6 9
8 5 6
8 5 6
*/

