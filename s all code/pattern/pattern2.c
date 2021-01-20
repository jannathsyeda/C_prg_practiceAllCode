#include<stdio.h>
int main()
{
    int row, col, n;
    printf("Enter N= ");
    scanf("%d", &n);


    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }

    printf("\n\n");
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }


    printf("\n\n");
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ", col+64);
        }
        printf("\n");
    }
}
