#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter num1 & num2: ");
    scanf("%d %d", &num1, &num2);

    int large = (num1>num2) ? num1 : num2;

    printf("Large number is: %d\n", large);
}


