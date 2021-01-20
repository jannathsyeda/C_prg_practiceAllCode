#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i, capital, small, digits;
    i = capital = small = digits = 0;
    while(str[i] != '\0' )
    {

        if(str[i] >= 65 && str[i] <=90)
        {
            capital++;
        }
        else if(str[i] >= 97 && str[i] <=122  )
        {
            small++;
        }
        else if(str[i] >= 48 && str[i] <=57)
        {
            digits++;
        }


        i++;

    }
    printf("C = %d\n", capital);
    printf("S = %d\n", small);
    printf("D = %d\n", digits);


}

