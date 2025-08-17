#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int num;
    printf("\n--- Program 4: Even Number Check ---\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is even.\n");
    }
    return 0;
}