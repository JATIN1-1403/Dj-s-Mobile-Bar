#include <stdio.h>



int main () {
    float annincome, income, taxamm, netincome;
    float taxA = 0.1, taxB = 0.2, taxC = 0.3; 
    char range;

    printf("====================================\n");
    printf("       Tax Computation Machine\n");
    printf("====================================\n");

    //user input
    printf("Enter Your Annual Income: \n");
    scanf(" %f", &income);

    printf("====================================\n");
    printf("       Tax Computation Result\n");
    printf("====================================\n");
    if (income <= 250000) {
        income = netincome;
        printf("Tax Rate Applied: 0%%");
        printf("\nTax Amount: %.2f", taxamm);
        printf("Net Income: %.2f", netincome);
    } else if (income <= 500000) {
        taxamm = income * (income / 0.1);
        printf("Tax Rate Applied: 10%%");

    } else if (income <= 1000000) {
        taxamm = income * (income / 0.2);
        printf("Tax Rate Applied: 20%%\n");
        
    } else {
        taxamm = income * (income / 0.3);
        printf("Tax Rate Applied: 20%%\n");
    }
    netincome = taxamm - income;
    printf("Tax Amount: %.2f", taxamm);
    printf("Net Income: %.2f", netincome);
    



    return 0;
}