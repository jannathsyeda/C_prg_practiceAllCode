#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
    {
        printf("The alphabet %c is Vowel\n", ch);
    }
    else
    {
        printf("The alphabet %c is Consonant\n", ch);
    }

    return 0;
}

