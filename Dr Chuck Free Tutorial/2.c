#include <stdio.h>

int main() {
    char n[100];
    printf("Hi...! Welcome to the System.\n");
    printf("Enter your name here: ");
    scanf("%100s", n);
    printf("%100s, How are you today?", n);
    return 0;
}
