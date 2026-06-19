// This program is for converting a lowercase character to a Uppercase character.
// This one uses inbuilt "ctype.h" library to capitalize the letter.

#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

int capitalizeChar(char x) {
    char upperCase = toupper(x);
    printf("Capital version of \"%c\" is: \033[1;4m%c\033[0m\n", x, upperCase);
}

int main(void) {
    while (1) {
        printf("\nEnter a Character in LowerCase: ");
        char lowerCase = getchar();
        if (lowerCase >= 97 && lowerCase <= 122 && (char)lowerCase != EOL) {
            capitalizeChar(lowerCase);
        } else {
            printf("Invalid input. Please enter a lowercase letter.\a\n");
        }
        while (getchar() != EOL && getchar() != EOF);
    }
    return 0;
}