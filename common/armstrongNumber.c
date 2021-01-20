#include<stdio.h>
int main(){
    int n, sum = 0, temp, i, r;
    printf("Enter Any Number: ");
    scanf("%d", &n);
    temp = n;

    while(temp != 0){
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;
    }

    printf("Sum = %d\n", sum);

    if(sum == n)
        printf("Yes it is Armstrong number\n");
    else
        printf("No it's not a Armstrong number");
}
//153 cube er sum
