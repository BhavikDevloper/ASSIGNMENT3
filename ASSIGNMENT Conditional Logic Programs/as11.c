/*11.WAP to find number is even or odd using ternary operator*/
#include <stdio.h>

int main() {
    int number;

    // Accepting a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Using ternary operator to check if the number is even or odd
    (number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n", number);

    return 0;
}

