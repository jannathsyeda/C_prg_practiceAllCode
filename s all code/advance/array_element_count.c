#include<stdio.h>
int main()
{
    int ara[100], length;
    printf("Enter array length: ");
    scanf("%d", &length);
    printf("Enter array values: ");
    for(int i = 0; i<length; i++)
    {
        scanf("%d", &ara[i]);
    }

    int max = ara[0];
    for(int i = 0; i<length; i++)
    {
        if(ara[i] > max )
            max = ara[i];
    }
    //printf("Max number is: %d\n", max);

    int count_number[max+1];
    for(int i=0; i<=max; i++)
    {
        count_number[i] = 0;
    }


    for(int i=0; i<length; i++)
    {
        count_number[ara[i]]++;
    }

    for(int i=0; i<=max; i++)
    {
        if(count_number[i] > 0)
        {
            printf("%d = %d\n", i, count_number[i]);
        }
    }
    return 0;
}
