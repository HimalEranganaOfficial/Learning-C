#include <stdio.h>

int two_inputs() {
    int age;
    float weight;
    /* Scanning two variables at once */
    scanf("%d %f", &age, &weight);
    printf("You entered age: %d and weight: %.2f\n", age, weight);
    printf("Press Enter to go to the main menu...");
    getchar(); // Consume the newline character left by scanf
    getchar(); // Wait for the user to press Enter
    return 0;
}