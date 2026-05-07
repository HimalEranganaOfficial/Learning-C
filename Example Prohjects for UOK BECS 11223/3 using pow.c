#include <stdio.h>
#include <math.h>

int use_pow() {
    double base = 2.0;
    double exponent = 3.0;
    double result = pow(base, exponent);

    printf("%.1f raised to %.1f is %.1f\n", base, exponent, result);
    printf("Press Enter to go to the main menu...");
    getchar(); // Wait for the user to press Enter
    return 0;
}
