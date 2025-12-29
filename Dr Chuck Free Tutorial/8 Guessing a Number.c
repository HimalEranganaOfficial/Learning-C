#include <stdio.h>
int main() {
    printf("Hi! Enter a Number...\n");
    printf("> ");
    int guess;
    while(scanf("%d", &guess) != EOF) {
        if (guess == 42) {
            printf("Congrats! You Guessed the Number Accurately!\n");
            break;
        }
        else if (guess < 42)
        {
            printf("Too low - Guess it again...\n");
            printf("> ");
        }
        else
        {
            printf("Too high - Guess it again...\n");
            printf("> ");
        }
    }
}