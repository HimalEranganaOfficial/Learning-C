#include <stdio.h>

int scan_with_fieldwidth() {
    int a, b, c;
    printf("Enter the three integers:\n");
    scanf("%3d %3d %3d", &a, &b, &c);
    printf("You entered: %d, %d, %d\n", a, b, c);
    printf("Press Enter to go to the main menu...");
    getchar(); // Consume the newline character left by scanf
    getchar(); // Wait for the user to press Enter
    return 0;
}