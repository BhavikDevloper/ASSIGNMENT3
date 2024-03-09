/*5.Check Number Is Positive or Negative*/
#include <stdio.h>

int main() {
    int number;

    // Accepting a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } 
 
}

