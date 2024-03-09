/*10.Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)*/

#include <stdio.h>
#include <stdlib.h> // for abs function

int main() {
    int number, sum = 0, digit;

    // Accepting the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating the sum of digits
    int tempNumber = abs(number); // Taking absolute value to handle negative numbers
    while (tempNumber != 0) {
        digit = tempNumber % 10;
        sum += digit;
        tempNumber /= 10;
    }

    // If the original number is negative, make the sum negative
    if (number < 0) {
        sum = -sum;
    }

    // Displaying the summation
    printf("Summation of digits of the number %d is %d\n", number, sum);

    return 0;
}

