// This program is for converting a lowercase character to a Uppercase character.
// This one uses inbuilt "ctype.h" library to capitalize the letter.

#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

int capitalizer(char x) {
    char upperCase = toupper(x);
    printf("Capital version of \"%c\" is: \033[1;4m%c\033[0m\n", x, upperCase);
}

int main(void) {
    while (1) {
        printf("\nEnter a word in LowerCase: ");
        char lowerCase[100];
        scanf("%s", &lowerCase);
        if ((char)lowerCase != EOL) {
            capitalizer(lowerCase);
        } else {
            printf("Invalid input. Please enter a lowercase word.\a\n");
        }
    }
    return 0;
}