#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    //scanf("%s", a);
    gets(a);
    int i, length;
    int flag = 0;
    length = strlen(a);
    for(i=0; i < length ; i++)
    {
        if(a[i] != a[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    if (flag==1)
    {
        printf("No it's not palindrome");
    }
    else
    {
        printf("Yes it is Palindrome");
    }
    return 0;
}

