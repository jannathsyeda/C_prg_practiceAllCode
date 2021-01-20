
#include<stdio.h>
int main()
{
    int i,array[4];
    for(i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
    }

    int sum=0;
    for(i=0;i<4;i++)
    {
        sum=sum+array[i];

    }
   printf("%d\n",sum);
   printf("avg of %d is=%d",sum,sum/4);
}
