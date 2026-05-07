#include <stdio.h>
#include <conio.h>
#include "customLib.h"


int clear_screen(void) {
    printf("\e[1;1H\e[2J"); // This ANSI escape code moves the cursor to the top-left corner and clears the screen.
    return 0;
}

int invalid_option(void) {
    printf("\n\nInvalid option. Please try again\nPress any key to continue...");
    _getche();
    clear_screen();
    return 0;
}

int main(void) {
    while (1) {
        int mainOption;
        clear_screen();
        printf("\033[1m\033[4mWelcome to All-in-One Software!\033[0m\n"); // \033[1m makes the text bold, \033[4m underlines the text, and \033[0m resets the formatting.
        printf("Please select an option:\n");
        printf("\n");
        printf("\n");
        printf("1. How to use scanf() to get two or more user inputs\n");
        printf("2. Run \"Audible Bell\" function in action\n");
        printf("3. How to use pow() in c\n");
        printf("4. How to use getchar() in c\n");
        printf("5. How to use fieldwidth in scanf()\n");
        printf("6. How to use fieldwidth in printf() and format text\n\n\n");
        mainOption = _getche();
        if (mainOption == '1') {
            clear_screen();
            printf("\033[4mYou selected option 1: How to use scanf() to get two or more user inputs.\033[0m\n");
            two_inputs();
            continue;
        } else if (mainOption == '2') {
            clear_screen();
            printf("\033[4mYou selected option 2: Run \"Audible Bell\" function in action.\033[0m\n");
            audible_bell();
            continue;
        } else if (mainOption == '3') {
            clear_screen();
            printf("\033[4mYou selected option 3: How to use pow() in c.\033[0m\n");
            use_pow();
            continue;
        } else if (mainOption == '4') {
            clear_screen();
            printf("\033[4mYou selected option 4: How to use getchar() in c.\033[0m\n");
            use_getchar();
            continue;
        } else if (mainOption == '5') {
            clear_screen();
            printf("\033[4mYou selected option 5: How to use fieldwidth in scanf().\033[0m\n");
            scan_with_fieldwidth();
            continue;
        } else if (mainOption == '6') {
            clear_screen();
            printf("\033[4mYou selected option 6: How to use fieldwidth in printf() and format text.\033[0m\n");
            print_with_fieldwidth();
            continue;
        } else {
            invalid_option();
            continue;
        }
    }
    
    return 0;
}