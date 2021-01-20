
#include<stdio.h>
int main()
{
    int i,array[4];
    for(i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
    }

    int max= array[0];
    for(i=0;i<4;i++)
    {

           if(max<array[i])
           {
              max=array[i];
           }

    }
        printf("%d",max);
}
