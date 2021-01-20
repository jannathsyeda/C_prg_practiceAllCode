#include<stdio.h>
int fibonacci(int num);

int main()
{
    int limit;

    printf("Enter limit: ");
    scanf("%d", &limit);

    for(int n = 0; n < limit; n++)
    {
        printf("%d ", fibonacci(n));
    }

    return 0;
}


int fibonacci(int num)
{
    if(num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        // recursive call
        return fibonacci(num-1) + fibonacci(num-2);
    }
}
