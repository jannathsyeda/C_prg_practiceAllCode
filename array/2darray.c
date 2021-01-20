#include<stdio.h>
int main()
{

    int array[3][3],row,col;
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d",&array[row][col]);
        }
    }

     for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
           printf("%d",array[row][col]);
        }
        printf("\n");
    }
}
