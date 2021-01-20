 #include<stdio.h>
int main(){
    double loan_amount, interest, total_amount, monthlyPay;
    int year;
    printf("Enter Loan Amount: ");
    scanf("%lf", &loan_amount);
    printf("Enter interest percentage: ");
    scanf("%lf", &interest);
    printf("For how many year: ");
    scanf("%d", &year);
    total_amount = loan_amount + ((loan_amount * interest * year)/100);
    monthlyPay = total_amount / (year * 12);

    printf("Total: %.2lf\n", total_amount);
    printf("Monthly: %.2lf\n", monthlyPay);
}
