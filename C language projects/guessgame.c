#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;
    int maxRange;
    char playAgain;

    printf("==============================\n");
    printf("       GUESS THE NUMBER      \n");
    printf("==============================\n");

    // difficulty selection
    printf("select difficulty level:\n");
    printf("1. Easy (1-10)\n");
    printf("2. Medium (1-50)\n");
    printf("3. Hard (1-100)\n");
    printf("Enter your choice: ");

    // range
    int difficulty;
    scanf("%d", &difficulty);
    switch (difficulty)
    {
    case 1:
        maxRange = 10;
        break;
    case 2:
        maxRange = 50;
        break;
    case 3:
        maxRange = 100;
        break;
    default:
        printf("Invalid choice, setting to Easy level.\n");
        maxRange = 10;
    }
    srand(time(0));                 // seed for random number generation
    number = rand() % maxRange + 1; // random number between 1 and max  Range

    printf("I have selected a number between 1 and %d. Can you guess it?\n", maxRange);
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > number)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);

    return 0;
}
