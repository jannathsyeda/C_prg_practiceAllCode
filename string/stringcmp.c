#include<stdio.h>
int main()
{
    char s1[20]="fahima jannath";
    char s2[30]="jannath";

    int d=strcmp(s1,s2);
    if(d==0){
        printf("equal");
    }else{
    printf("not equal");
}
}
