/*10.WAP to check whether a number is negative, positive or zero.*/
#include <stdio.h>

int main() {
    int number;

    // Accepting a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is negative, positive, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}

