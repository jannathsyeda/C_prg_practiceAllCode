#include<stdio.h>
int main(){
    int num, rem, temp, sum = 0;
    scanf("%d" ,&num);
    temp = num;

   while(temp!=0){
        rem = temp%10;
        sum = (sum * 10) + rem;
        temp = temp / 10;
   }


    printf("Sum = %d\n", sum);
    return 0;
}



