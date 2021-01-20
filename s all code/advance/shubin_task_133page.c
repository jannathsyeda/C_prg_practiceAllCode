#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000], ch;
    int isStarted = 0;
    printf("Enter your string: ");
    gets(str);
    int length = strlen(str);
    for(int i=0; i<length; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' )
        {
            if(isStarted == 0)
            {
                isStarted = 1;
                ch =  str[i] - 32;
                printf("%c", ch);
            }
            else
            {
                printf("%c", str[i]);
            }


        }
        else if( (str[i] >= 'A' && str[i] <= 'Z' ) || (str[i] >= 48 && str[i] <= 57 ) )
        {
            if(isStarted == 0)
            {
                isStarted = 1;
            }
            printf("%c", str[i]);
        }
        else
        {
            if(isStarted == 1)
            {
                isStarted = 0;
                printf("\n");
            }
        }
    }

}
