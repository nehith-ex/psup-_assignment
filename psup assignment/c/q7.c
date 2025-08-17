#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int age;
    printf("\n--- Program 7: Voting Eligibility Check ---\n");
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Eligible to vote.\n");
    } else {
        printf("Not eligible to vote.\n");
    }
    return 0;
}
