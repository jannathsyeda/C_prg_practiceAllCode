#include<stdio.h>
int main(){
    int x[] = { 1,2,3,4,5 };

    int *ptr;
    ptr = &x[0];

    for(int i=0; i<5; i++){
        printf("%d\n", *ptr);
        ptr++;
    }
}



