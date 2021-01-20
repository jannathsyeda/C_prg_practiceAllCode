#include<stdio.h>
int main()
{
    int row,col, sum = 0,i,j;
    printf("Enter row & col: ");
    scanf("%d %d", &row, &col);
    int arr1[row][col], arr2[row][col] ;
    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n\n1st 2d Array is:\n");
    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }


    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }


    printf("\n\n2nd 2d Array is:\n");
    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}
/*
5 5
6 4 7 8 9
3 7 1 9 9
8 6 4 2 7
2 4 2 5 9
4 1 6 7 3
*/

