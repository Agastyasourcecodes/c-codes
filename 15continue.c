#include <stdio.h>

int main() {
    int i; // Declare and initialize i
    int age; // Declare age to store user input

    printf("Enter iteration time: ");
    scanf("%d", &i);

    for (int j = 0; j < i; j++) {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 10) {
            continue; // Skip the rest of the loop for age < 10
        }

        printf("Hey Guys\n");
        printf("Checking Continue Statement\n\n");
    }

    return 0;
}

