#include<stdio.h>
int main()
{
    int i,pos=-1,a,array[]= {1,5,3,7,9};
    printf("enter the value:\n");
    scanf("%d",&a);


    for(i=0; i<5; i++)
    {
        if(array[i]==a)
        {
            pos=i+1;
            break;
        }


    }
    if(pos==-1)
        {
            printf("not found");
        }
        else
        {
            printf("the value %d is in %d position",a,pos);
        }

}
