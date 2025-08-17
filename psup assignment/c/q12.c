#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int marks;
    printf("\n--- Program 12: Grade Classifier ---\n");
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 90) {
        printf("A\n");
    } else if (marks >= 75) {
        printf("B\n");
    } else if (marks >= 50) {
        printf("C\n");
    } else {
        printf("Fail\n");
    }
    return 0;
}