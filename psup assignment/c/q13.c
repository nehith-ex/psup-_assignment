#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int num1, num2, num3;
    printf("\n--- Program 13: Smallest of Three Numbers ---\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    if (num1 <= num2 && num1 <= num3) {
        printf("The smallest number is: %d\n", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("The smallest number is: %d\n", num2);
    } else {
        printf("The smallest number is: %d\n", num3);
    }
    return 0;
}