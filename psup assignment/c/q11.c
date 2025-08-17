#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int num;
    printf("\n--- Program 11: Positive/Negative/Zero Check ---\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}