#include<stdio.h>
int main()
{
    int year;
    while(1)
    {
        printf("Enter year: ");
        scanf("%d", &year);

        if(year%400 == 0)
        {
            printf("Leap Year\n\n");
        }
        else if(year%4 == 0 && year%100 != 0)
        {
            printf("Leap Year\n\n");
        }
        else
        {
            printf("Not Leap Year\n\n");
        }
    }

}
