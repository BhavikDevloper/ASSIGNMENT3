/*22. C Program to Reverse a Number Using FOR Loop*/

#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Reversing the number using a for loop
    for (; number != 0; number /= 10) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

