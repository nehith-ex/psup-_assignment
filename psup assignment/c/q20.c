#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int bev_choice;
    printf("\n--- Program 20: Beverage Menu ---\n");
    printf("Enter beverage choice (1: Tea, 2: Coffee, 3: Juice): ");
    scanf("%d", &bev_choice);
    switch (bev_choice) {
        case 1: printf("Tea\n"); break;
        case 2: printf("Coffee\n"); break;
        case 3: printf("Juice\n"); break;
        default: printf("Invalid choice\n"); break;
    }
    return 0;
}