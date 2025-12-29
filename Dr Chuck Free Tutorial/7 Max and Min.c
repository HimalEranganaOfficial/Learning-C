#include <stdio.h>
int main() {
    int first = 1;
    int val, maxval, minval;

    while (scanf("%d", &val) != EOF) {
        if (first || val > maxval) maxval = val;
        if (first || val < minval) minval = val;
        first = 0;
    }
    
    printf("Maximum Value: %d\n", maxval);
    printf("Minium Value: %d\n", minval);

    return 0;
}