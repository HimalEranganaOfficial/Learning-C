#include <stdio.h>

int print_with_fieldwidth() {
    printf("This software prints a price list.\n");
    float a, b, c;
    a = 1500.50;
    b = 25.75;
    c = 35033.00;
    printf("Item 1: $%12.2f\n", a);
    printf("Item 2: $%12.2f\n", b);
    printf("Item 3: $%12.2f\n", c);
    printf("Press Enter to go to the main menu...");
    getchar(); // Wait for the user to press Enter
    return 0;
}