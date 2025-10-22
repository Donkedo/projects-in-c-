#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int count = 1;
    srand(time(0));
    int guess = rand() % 100 + 1;
    int n;

    printf("Enter your guess %d: ", count);
    scanf("%d", &n);

    while (guess != n)
    {
        if (n > guess)
        {
            printf("Your guess is high\n");
        }
        else
        {
            printf("Your guess is low\n");
        }
        count++;
        printf("Enter your guess %d: ", count);
        scanf("%d", &n);
    }

    printf("Congrats! You guessed the number %d in %d attemps.",guess, count);

    return 0;
}
