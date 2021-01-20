#include<stdio.h>
int main()
{
    int row, col, n;
    printf("Enter N= ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    printf("\n\n");
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }



    printf("\n\n");
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            if(col%2 != 0 )
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
            //printf("%d ", col%2);  ei line likle uporer if else lagbe na
        }
        printf("\n");
    }


     printf("\n\n");
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ", col+64);
        }
        printf("\n");
    }

     printf("\n\n");
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ", row+64);
        }
        printf("\n");
    }


}
