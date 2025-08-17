#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char password[50];
    printf("\n--- Program 3: Password Check ---\n");
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(password, "admin123") == 0) {
        printf("Welcome\n");
    }
    return 0;
}