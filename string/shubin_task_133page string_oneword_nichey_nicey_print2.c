/*output
my name is shakib
My
Name
Is
Shakib
*/
#include<stdio.h>
int main()
{
    char a[100], ch;
    gets(a);
    int isWordStarted = 0, i=0;
    while( (ch = a[i]) != '\0')
    {
        if(ch >= 'a' && ch <= 'z')
        {
            if(isWordStarted == 0)
            {
                isWordStarted = 1;
                ch = ch - 32;
                printf("%c", ch);
            }
            else
            {
                printf("%c", ch);
            }

        }
        else if( (ch >= 'A' && ch <= 'Z')  || (ch >= '0' && ch <= '9'))
        {
            if(isWordStarted == 0)
            {
                isWordStarted = 1;
            }
            printf("%c", ch);
        }
        else
        {
            if(isWordStarted == 1)
            {
                isWordStarted = 0;
                printf("\n");
            }
        }
        i++;
    }
}



