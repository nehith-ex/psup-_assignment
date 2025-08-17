#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int fuel_choice;
    printf("\n--- Program 19: Fuel Type Check ---\n");
    printf("Enter fuel type (1: Petrol, 2: Diesel, 3: Electric): ");
    scanf("%d", &fuel_choice);
    switch (fuel_choice) {
        case 1: printf("Petrol\n"); break;
        case 2: printf("Diesel\n"); break;
        case 3: printf("Electric\n"); break;
        default: printf("Invalid choice\n"); break;
    }
    return 0;
}