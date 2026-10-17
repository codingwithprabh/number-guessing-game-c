#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));

    int attempts;
    int rand_num;
    int dif_level;
    int guessed;
    int won;
    int ch;
    int extra_input;
    char play_again;

    do
    {
        printf("===================================\n");
        printf("       Number Guessing Game\n");
        printf("===================================\n");
        printf("\nRules:\n");
        printf("1. Choose a difficulty level.\n");
        printf("2. You get 5 attempts.\n");
        printf("3. Guess the correct number.\n");

        printf("\n========== Difficulty Level ==========\n");
        printf("1. Easy   (1-25)\n");
        printf("2. Normal (1-100)\n");
        printf("3. Hard   (1-500)\n");

        while (1)
        {
            printf("\nChoose difficulty (1-3): ");

            if (scanf("%d", &dif_level) != 1)
            {
                printf("Invalid input! Enter a number.\n");

                while ((ch = getchar()) != '\n' && ch != EOF)
                {
                }

                if (ch == EOF)
                    return 0;

                continue;
            }

            extra_input = 0;

            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                if (ch != ' ' && ch != '\t' && ch != '\r')
                    extra_input = 1;
            }

            if (ch == EOF)
                return 0;

            if (extra_input)
            {
                printf("Invalid input! Enter only one number.\n");
                continue;
            }

            if (dif_level >= 1 && dif_level <= 3)
                break;

            printf("Please choose between 1 and 3.\n");
        }

        if (dif_level == 1)
        {
            rand_num = (rand() % 25) + 1;
        }
        else if (dif_level == 2)
        {
            rand_num = (rand() % 100) + 1;
        }
        else
        {
            rand_num = (rand() % 500) + 1;
        }

        attempts = 5;
        won = 0;

        while (attempts > 0)
        {
            printf("\nGuess a number: ");

            if (scanf("%d", &guessed) != 1)
            {
                printf("Invalid input! Enter a number.\n");

                while ((ch = getchar()) != '\n' && ch != EOF)
                {
                }

                if (ch == EOF)
                    return 0;

                continue;
            }

            extra_input = 0;

            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                if (ch != ' ' && ch != '\t' && ch != '\r')
                    extra_input = 1;
            }

            if (ch == EOF)
                return 0;

            if (extra_input)
            {
                printf("Invalid input! Enter only numbers.\n");
                continue;
            }

            if (guessed == rand_num)
            {
                printf("Congratulations! You guessed correctly!\n");
                won = 1;
                break;
            }
            else if (guessed > rand_num)
            {
                printf("Wrong guess! Your guess is too high.\n");
            }
            else
            {
                printf("Wrong guess! Your guess is too low.\n");
            }

            attempts--;

            if (attempts > 0)
            {
                printf("Attempts remaining: %d\n", attempts);
            }
        }

        if (!won)
        {
            printf("\nAttempts over! The correct number was %d.\n",
                   rand_num);
        }

        while (1)
        {
            printf("\nDo you want to play again? (y/n): ");

            if (scanf(" %c", &play_again) != 1)
                return 0;

            extra_input = 0;

            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                if (ch != ' ' && ch != '\t' && ch != '\r')
                    extra_input = 1;
            }

            if (ch == EOF)
                return 0;

            if (!extra_input &&
                (play_again == 'y' || play_again == 'Y' ||
                 play_again == 'n' || play_again == 'N'))
            {
                break;
            }

            printf("Invalid input! Enter only y or n.\n");
        }

    } while (play_again == 'y' || play_again == 'Y');

    printf("\nThanks for playing!\n");

    return 0;
}
