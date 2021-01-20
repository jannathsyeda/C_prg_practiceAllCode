#include<stdio.h>
int main()
{
    int m,n, i=1;
    int sum = 0;
    scanf("%d", &n);

    for(m=1; m<=n; m++)
    {
        for(i=1; i<=10; i++)
        {
            printf("%d X %d = %d\n", m,i, m*i);
        }
        i=1;
        printf("\n");
    }


    //using addition
    for(m=1; m<=n; m++)
    {
        for(i=1; i<=10; i++)
        {
            sum+=m;
            printf("%d X %d = %d\n", m,i, sum);
        }
        i=1;
        sum = 0;
        printf("\n");
    }



    return 0;
}



