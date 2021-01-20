#include<stdio.h>
int main()
{
    int a1[10][10],a2[10][10],result[10][10];
    int i,j,r1,c1,r2,c2,sum=0,first,second;
    printf("enter r1 and c1\n");
    scanf("%d %d",&r1,&c1);
    printf("enter r2 and c2\n");
    scanf("%d %d",&r2,&c2);

    printf("enter a1 elements\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {

            printf("a1[%d][%d]=",i,j);
            scanf("%d",&a1[i][j]);
        }
        printf("\n");
    }



    printf("a1 = ");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }

    printf("enter a2 elements\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {

            printf("a2[%d][%d]=",i,j);
            scanf("%d",&a2[i][j]);
        }
        printf("\n");
    }

    printf("a2 = ");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                sum=sum + a1[i][k]*a2[k][i];
            }
            result[i][j]=sum;
            sum=0;
        }

    }

    printf("result = ");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }




}

