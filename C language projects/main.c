// calculator
#include <stdio.h>

int main()
{
    // inputs
    float total, firstnum, secondnum;
    int operation, choice; // for selection of operation
    char ant;
    // design / selection of operation
    do {
    printf("===================================\n");
    printf("          SIMPLE CALCULATOR\n");
    printf("===================================\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");

    // user input
    printf("Select Your Operation: ");
    scanf("%d", &operation);

    // if statements to display what operation the user have selected
    if (operation == 1)
    {
        printf("You Selected Addition.\n");
        choice = 1;
    }
    else if (operation == 2)
    {
        printf("You Selected Subtraction.\n");
        choice = 2;
    }
    else if (operation == 3)
    {
        printf("You Selected Multiplication.\n");
        choice = 3;
    }
    else if (operation == 4)
    {
        printf("You Selected Division.\n");
        choice = 4;
    }
    else
    {
        printf("Invalid Number for operation");
    }

    // input for first and second number
    printf("Enter Your First Number: ");
    scanf("%f", &firstnum);
    printf("Enter Your Second Number: ");
    scanf("%f", &secondnum);

    // switch statements
    switch (choice)
    {
    case 1:
        total = firstnum + secondnum;
        break;
    case 2:
        total = firstnum - secondnum;
        break;
    case 3:
        total = firstnum * secondnum;
        break;
    case 4:
        if (secondnum == 0)
        {
            printf("Invalid DIVISOR");
            return 0; // exit program
        }
        else
        {
            total = firstnum / secondnum;
        }
        break;
    default:
        printf("Out of Range\n");
    }
    // output
    printf("The Answer is: %.2f\n", total);
    printf("Do you want another transaction [y/n]: ");
        scanf(" %c", &ant);  // note the space before %c
        printf("\n===========================================\n");

    } while (ant == 'y' || ant == 'Y');

    return 0;
}