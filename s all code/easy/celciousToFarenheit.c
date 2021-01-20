#include<stdio.h>
int main(){
    double c,f;

    /*
    printf("Enter farenhiet: ");
    scanf("%lf", &f);
    c = (5*(f-32)) / 9;
    printf("Celcious is: %.2lf\n", c);
    */

    printf("Enter Celcious: ");
    scanf("%lf", &c);
    f = ((9*c)/5) + 32;
    printf("Farenhiet is: %.2lf\n", f);


}
