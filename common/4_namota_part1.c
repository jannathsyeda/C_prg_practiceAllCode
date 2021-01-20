#include<stdio.h>
int main()
{
    int n, i=1;
    printf("Enter Any Number For Namota: ");
    scanf("%d", &n);
    while(i<=10)
    {
        printf("%d X %d = %d\n", n,i,n*i);
        i++;
    }

    printf("\n\n");

    for(int i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n", n,i, n*i);
    }

    return 0;
}


