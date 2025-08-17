#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int num;
    printf("\n--- Program 1: Positive Number Check ---\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("The number is positive.\n");
    }
    return 0;
}