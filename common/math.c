#include<stdio.h>
#include<math.h>
int main(){
    double n;
    scanf("%lf", &n);
    //n = sqrt(n);
    //n = round(n);
    //n = ceil(n);
    //n = floor(n);
    n = pow(n,2);
    printf("%lf\n", n);
}
