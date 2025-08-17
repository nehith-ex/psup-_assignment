#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int num;
    printf("\n--- Program 6: Positive/Negative Check ---\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }
    return 0;
}
