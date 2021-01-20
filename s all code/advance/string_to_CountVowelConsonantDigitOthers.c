#include<stdio.h>
int main()
{
    char str[100], ch;
    gets(str);
    int i, vowel, consonant, digit, others, words;
    i = vowel = consonant = digit = others = words = 0;
    int wordStart = 0;
    while((ch = str[i]) != '\0' )
    {

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            wordStart = 1;
            vowel++;
        }
        else if((ch >= 'a' && ch <='z') ||  (ch>= 'A' && ch <= 'Z')  )
        {
            wordStart = 1;
            consonant++;
        }
        else if(ch >= '0' && ch <='9')
        {
            wordStart = 1;
            digit++;
        }
        else if(ch == ' ')
        {
            if(wordStart == 1){
                wordStart = 0;
                words++;
            }
        }
        else
        {
            wordStart = 1;
            others++;
        }

        i++;

    }
    words++;
    printf("V = %d\n", vowel);
    printf("C = %d\n", consonant);
    printf("D = %d\n", digit);
    printf("W = %d\n", words);
    printf("O = %d\n", others);


}
