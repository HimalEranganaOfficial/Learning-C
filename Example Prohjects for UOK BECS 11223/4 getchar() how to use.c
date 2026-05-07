#include <stdio.h>

int use_getchar() {
    int ch;
    printf("Enter a character: ");
    ch = getchar(); // Waits for user input and Enter key
    printf("You entered: %c\n", ch);
    printf("Press Enter to go to the main menu...");
    getchar(); // Consume the newline character left by scanf
    getchar(); // Wait for the user to press Enter
    return 0;
}