#include <stdio.h>
#include <math.h>

int main() {
    double base = 2.0;
    double exponent = 3.0;
    double result = pow(base, exponent);

    printf("%.1f raised to %.1f is %.1f\n", base, exponent, result);
    return 0;
}
