#include<stdio.h>
int main()
{
    int row,col, sum = 0,i,j;
    printf("Enter row & col: ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for(int i = 0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        {
            sum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, sum);
        sum=0;
    }

    printf("\n\n");

    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        {
            sum += arr[j][i];
        }
        printf("Sum of col %d: %d\n", i+1, sum);
        sum=0;
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
