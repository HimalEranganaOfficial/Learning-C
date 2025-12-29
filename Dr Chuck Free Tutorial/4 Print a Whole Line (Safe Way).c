#include <stdio.h>

int main() {
    char sentence[1000];
    printf("Enter your Sentence Here: ");
    fgets(sentence, 1000, stdin);
    printf("\nThis is your Sentence: « %s »", sentence);
}