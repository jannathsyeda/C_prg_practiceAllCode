#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter Any String: ");
    gets(a);
    int length = 0;
    for(int i=0; a[i] != '\0'; i++){
        length++;
    }
    printf("%s = %d\n", a, length);


    printf("\nAnother way:\n\n");
    /* Alternative way*/
    int j=0, len = 0;
    while(a[j] != 0){
        len++;
        j++;
    }
    printf("Using While Loop Length of %s is %d\n", a, len);
}
