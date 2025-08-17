#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int marks;
    printf("\n--- Program 5: Pass Mark Check ---\n");
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 40) {
        printf("The student has passed.\n");
    }
    return 0;
}
