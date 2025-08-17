#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char ch;
    printf("\n--- Program 9: Vowel/Consonant Check ---\n");
    printf("Enter a character: ");
    scanf(" %c", &ch);
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }
    return 0;
}