#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char op;
    double num1, num2;
    printf("\n--- Program 17: Calculator ---\n");
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch (op) {
        case '+': printf("Result: %lf\n", num1 + num2); break;
        case '-': printf("Result: %lf\n", num1 - num2); break;
        case '*': printf("Result: %lf\n", num1 * num2); break;
        case '/': printf("Result: %lf\n", num1 / num2); break;
        default: printf("Invalid operator\n"); break;
    }
    return 0;
}