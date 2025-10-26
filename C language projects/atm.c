 // ATM MACHINE PROGRAM IN C
#include <stdio.h>

void space() {
    printf("===========================================\n");
}

int main() {
    float deposit, withdraw;
    float bal = 5000;
    int transac;
    char antransac;

    space();
    printf("            ATM MACHINE LEARNING\n");
    space();
    do {
        printf("\n1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Cancel Transaction\n");

        printf("Choose your transaction (1-4): ");
        scanf("%d", &transac);
        space();

        if (transac == 1) {
            printf("Deposit Amount: ");
            scanf("%f", &deposit);
            bal += deposit;
            printf("Your Balance is: %.2f\n", bal);
        }
        else if (transac == 2) {
            printf("Withdraw Amount: ");
            scanf("%f", &withdraw);
            if (withdraw <= bal) {
                bal -= withdraw;
                printf("Withdrawal Successful. Your Balance: %.2f\n", bal);
            } else {
                printf("Insufficient balance.\n");
            }
        }
        else if (transac == 3) {
            printf("Balance: %.2f\n", bal);
        }
        else if (transac == 4) {
            printf("Thank You For Using ATM MACHINE.\n");
            break;
        }
        else {
            printf("Invalid option. Please enter a number between 1 and 4.\n");
        }

        printf("Do you want another transaction [y/n]: ");
        scanf(" %c", &antransac);  // note the space before %c
        space();
        
    } while (antransac == 'y' || antransac == 'Y');

    return 0;
}
