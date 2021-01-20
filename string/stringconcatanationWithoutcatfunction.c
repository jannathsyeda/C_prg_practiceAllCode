#include<stdio.h>
int main()
{
    char s1[20]="I'm fahima ";
    char s2[20]="jannath";
    int length=0;

    for(int i=0; s1[i]!='\0'; i++)
    {
        length++;
    }

    printf("%d",length);



for(int j=0; s2[j]!='\0'; j++)
{
    s1[length+j]=s2[j];

}
printf("%s\n",s1);

}


