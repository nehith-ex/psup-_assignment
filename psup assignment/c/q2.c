#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char ch;
    printf("\n--- Program 2: Uppercase Character Check ---\n");
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is uppercase.\n");
    }
    return 0;
}