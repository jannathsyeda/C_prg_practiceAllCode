#include<stdio.h>
int main()
{
    char s1[100];
    gets(s1);
    char v,c,w,d,other;
    int i,ch;
    v=c=d=w=other=0;
   int  isWord = 0;
    for(i=0; (ch=s1[i])!='\0'; i++)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            isWord = 1;
            v++;

        }
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            isWord = 1;
            c++;
        }
        else if(ch>='0' &&ch<='9')
        {
            isWord = 1;
            d++;
        }
         else if(ch==' ')
        {
            if(isWord == 1){
                isWord = 0;
                w++;
            }
        }
        else
        {
            isWord = 1;
            other++;
        }
    }
    w++;

    printf("v=%d\n",v);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("w=%d\n",w);
    printf("other =%d\n",other);






}
