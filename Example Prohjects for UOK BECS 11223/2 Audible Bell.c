#include <stdio.h>

int audible_bell() {
    printf("Didn\'t you hear the sound??? \a\n\n");
    printf("Press Enter to go to the main menu...");
    getchar(); // Wait for the user to press Enter
    return 0;
}