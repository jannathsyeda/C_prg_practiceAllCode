
#include<stdio.h>
int main()
{
    char country[]={'B','a','n','g','l','a','s','h'};
    int i, length;
    printf("%s\n",country);
length=7;
    for(i=0;i<length;i++)

    {
        if(country[i]>=97 && country[i]<=122)
        {
            country[i]='A'+(country[i]-'a');


        }
    }
    printf("%s\n",country);
    return 0;
}
