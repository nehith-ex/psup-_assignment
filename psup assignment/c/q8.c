#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int num1, num2;
    printf("\n--- Program 8: Compare Two Numbers ---\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("The larger number is: %d\n", num1);
    } else {
        printf("The larger number is: %d\n", num2);
    }
    return 0;
}