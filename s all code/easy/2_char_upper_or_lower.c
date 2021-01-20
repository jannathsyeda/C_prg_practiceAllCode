#include<stdio.h>
int main()
{

        char ch;
        scanf("%c", &ch);
        if(ch>= 'a' && ch<='z')
        {
            printf("The alphabet %c is Lower Case\n", ch);
        }
        else if(ch >= 'A' && ch <= 'Z') 
        {
            printf("The alphabet %c is Upper Case\n", ch);
        }
		else{
			printf("The input in not a letter");
		}

    return 0;

}
