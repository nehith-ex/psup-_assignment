#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int year;
    printf("\n--- Program 10: Leap Year Check ---\n");
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
    return 0;
}