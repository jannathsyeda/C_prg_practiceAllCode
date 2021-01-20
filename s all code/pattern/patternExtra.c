#include<stdio.h>
int main()
{
    int row, col, n;
    printf("Enter Length: ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++ )
    {
        printf("\t");
        for(col = 1; col <= row; col++ )
        {
            printf("*");
        }
        for(col = 1; col <= (n-row)*2; col++ )
        {
            printf(" ", row);
        }
        for(col = 1; col <= row; col++ )
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");



    for(row = 1; row <= n; row++ )
    {
        printf("\t");
        if(row == n || row == 1)
        {
            for(col = 1; col <= n; col++ )
            {
                printf("*");
            }
        }
        else
        {
            for(col = 1; col <= 1; col++ )
            {
                printf("*");
            }
            for(col = 1; col <= n-2; col++ )
            {
                printf(" ");
            }
            for(col = 1; col <= 1; col++ )
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n\n");

}

