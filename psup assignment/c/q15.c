#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char ch;
    printf("\n--- Program 15: Character Type Check ---\n");
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isalpha(ch)) {
        printf("Alphabet\n");
    } else if (isdigit(ch)) {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }
    return 0;
}
