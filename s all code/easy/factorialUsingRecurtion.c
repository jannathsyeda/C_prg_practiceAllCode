#include<stdio.h>
int factorial(int n)
{
    if(n==1)
        return n;
    else
        return n* factorial(n-1);
}

int main()
{
    int n;
    printf("Enter Digit: ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("factorial of %d is %d\n", n, result);
}
