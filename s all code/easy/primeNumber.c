#include<stdio.h>
int main()
{
    /*
    int n, count = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            count++;
            break;
        }
    }

    if(count == 0)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    */

    int limit;
    scanf("%d", &limit);
    for(int i=2; i<=limit; i++)
    {
        int count = 0;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0)
        {
            printf("%d ", i);
        }
    }
}
