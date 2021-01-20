#include<stdio.h>
int main()
{
    char s1[30]="fahima",s2[30];
    int len=strlen(s1);
    int i, j;
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]!='\0';
    printf("reverse of fahima is:  %s\n ",s2);
}
