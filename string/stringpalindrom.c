#include<stdio.h>
int main()
{
    char s1[30],s2[30];
    printf("Enter any name: ");
    gets(s1);
    int len=strlen(s1);
    int j,i;
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]!='\0';
    printf("reverse of %s is: %s\n",s1,s2);


    if(strcmp(s1,s2) == 0)
    {
        printf("palindrome");
    }
    else
    {

        printf("Not palindrome");
    }
}
