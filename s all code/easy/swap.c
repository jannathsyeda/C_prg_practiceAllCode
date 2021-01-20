#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter num1 & num2: ");
    scanf("%d %d", &num1, &num2);

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter Swap\n");
    printf("1st Number is: %d\n", num1);
    printf("2nd Number is: %d\n", num2);
}

