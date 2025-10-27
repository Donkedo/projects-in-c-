#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int difficulty() {
    int choice;
    printf("select difficulty level\n");
    printf("1 for easy\n");
    printf("2 for medium\n");
    printf("3 for hard\n");
    scanf("%d", &choice);
    return choice;
}

char* words() {
    int level = difficulty();
    static char easy[5][4] = {"cat", "dog", "pop", "ice", "cow"};
    static char medium[5][5] = {"bird", "fish", "pond", "tree", "frog"};
    static char hard[5][6] = {"risky", "plane", "train", "slice", "brick"};
    srand(time(0));
    int r = rand() % 5;

    if (level == 1) {
        printf("your diificulty level is easy\n");
        printf("your word have %d letters\n", (int)strlen(easy[r]));
        return easy[r];
    } 
    else if (level == 2) {
        printf("your diificulty level is medium\n");
        printf("your word have %d letters\n", (int)strlen(medium[r]));
        return medium[r];
    } 
    else {
        printf("your diificulty level is hard\n");
        printf("your word have %d letters\n", (int)strlen(hard[r]));
        return hard[r];
    }
}

int guess() {
    printf("//Rules of the game.\n 1.you can have only six guesses wrong.\n 2.follow the rule 1\n");
    char *word = words();
    int len = strlen(word);
    char progress[20];
    int wrong = 0;

    for (int i = 0; i < len; i++) progress[i] = '_';
    progress[len] = '\0';

    while (wrong < 6) {
        printf("\nWord: %s\n", progress);
        printf("Enter your guess: ");
        char g;
        scanf(" %c", &g);

        int correct = 0;
        for (int i = 0; i < len; i++) {
            if (word[i] == g && progress[i] == '_') {
                progress[i] = g;
                correct = 1;
            }
        }

        if (!correct) {
            wrong++;
            printf("Wrong guess! (%d/6)\n", wrong);
        } else {
            printf("Good guess!\n");
        }

        if (strcmp(progress, word) == 0) {
            printf("\nYou won! The word was '%s'\n", word);
            return 0;
        }
    }

    printf("\nYou lost! The word was '%s'\n", word);
    return 0;
}

int main() {
    guess();
    return 0;
}

