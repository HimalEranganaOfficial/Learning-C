#include <stdio.h>

int main() {
    int ch;
    printf("Enter a character: ");
    ch = getchar(); // Waits for user input and Enter key
    printf("You entered: %c\n", ch);
    return 0;
}