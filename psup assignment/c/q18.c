#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int month, year;
    printf("\n--- Program 18: Days in Month ---\n");
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("29 days\n");
            } else {
                printf("28 days\n");
            }
            break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }
    return 0;
}