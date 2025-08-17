#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int num;
    printf("\n--- Program 14: Divisibility Check ---\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by 3 and 5\n");
    } else {
        printf("Not divisible by 3 and 5\n");
    }
    return 0;
}