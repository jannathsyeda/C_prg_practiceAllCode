#include<stdio.h>
int main()
{
    char s[50];
    printf("enter name\n");
    gets(s);
  int  lenght=0;

    for(int i=0;s[i]!='\0';i++)
    {
        lenght++;
    }
    printf("%d",lenght);

}
