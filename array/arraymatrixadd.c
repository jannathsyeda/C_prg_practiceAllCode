#include<stdio.h>
int main()
{
    int i,j,numberOfRow,numberOfCol;
    int a1[10][10],a2[10][10];

    printf("Enter number of row and col \n");
    scanf("%d %d",&numberOfRow,&numberOfCol);


    printf("enter element for a1 matrix\n");
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfCol; j++)
        {
            printf("a1[%d][%d] =",i,j);

            scanf("%d",&a1[i][j]);
        }
        printf("\n");

    }

    printf("a1 =");
    for(i=0; i<numberOfRow; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCol; j++)
        {
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }

    printf("enter element for a1 matrix\n");
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfCol; j++)
        {
            printf("a2[%d][%d] =",i,j);

            scanf("%d",&a2[i][j]);
        }
        printf("\n");

    }
    printf("a2 =");
    for(i=0; i<numberOfRow; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCol; j++)
        {
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
int c[10][10];
printf("sum of c array");
    for(i=0; i<numberOfRow; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCol; j++)
        {
            c[i][j]=a1[i][j]+a2[i][j];

        }
        printf("\n");
    }

     for(i=0; i<numberOfRow; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCol; j++)
        {
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }



}
