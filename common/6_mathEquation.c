#include<stdio.h>
int main(){
    double a1,a2,b1,b2,c1,c2,x,y,d;
    printf("Enter value of a1, b1, c1 : ");
    scanf("%lf %lf %lf", &a1, &b1, &c1);
    printf("Enter value of a2, b2, c2 : ");
    scanf("%lf %lf %lf", &a2, &b2, &c2);
    d = (a1*b2 - a2*b1);
    if((int) d == 0){
        printf("Value of x & y can not determined\n");
    }else{
        x = ( b2*c1 - b1*c2)/ d;
        y = ( a1*c2 - a2*c1)/ d;
        printf("x = %.2lf & y = %.2lf\n", x,y);
    }

}
