#include<stdio.h>
int main()
{
    int decimal, hexa, octal;

    //decimal ro octal and hexa
    printf("Enter Any Decimal Number: ");
    scanf("%d", &decimal);
    printf("Octal Number is: %o\n", decimal);  // decimal to octal
    printf("HexaDecimal Number is: %x\n", decimal); // decimal to hexa

    printf("\n\n\n");

    //hexa to decimal and octal
    printf("Enter Any Hexa Value: ");
    scanf("%x", &hexa);
    printf("Decimal is: %d\n", hexa);
    printf("Octal is: %o\n", hexa);


    printf("\n\n\n");

    //octal to decimal and hexa
    printf("Enter Any Octal Value: ");
    scanf("%o", &octal);
    printf("Decimal is: %d\n", octal);
    printf("Hexa is: %x\n", octal);










}
