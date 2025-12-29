#include <stdio.h>

int main() {
    char longLine[1000];
    printf("Enter a whole Sentence to Echo back...\n");
    printf(">");
    scanf("%[^\n]1000s", longLine); // "[^\n]" is a REGEX part...! :)
    printf("Here is what you told me before: «%s»", longLine);
    return 0;
}