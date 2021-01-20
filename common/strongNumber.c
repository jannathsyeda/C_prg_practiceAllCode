#include<stdio.h>
int main(){
    int n, sum = 0, temp, i, rem;
    printf("Enter Any Number: ");
    scanf("%d", &n);
    temp = n;

    while(temp != 0){
        rem = temp % 10;

        int fact = 1;
        for(i=1; i<=rem; i++){
            fact*=i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }

    printf("Sum = %d\n", sum);

    if(sum == n)
        printf("Yes it is strong number\n");
    else
        printf("No it's not a strong number");
}
//145 factorial er sum
