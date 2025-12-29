#include <stdio.h>

/* I am a comment */

int main() {
    int name[50], x;
    printf("Hey... What is your name?\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Hi %s Have a Nice Day..!\n", name);
    printf("Enter a Random Number Here: ");
    scanf("%d", &x);
    x--;
    printf("\nHere is the -1 to your input: %d", x);

    return 0;
}