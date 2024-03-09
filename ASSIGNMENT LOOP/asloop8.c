/*8. Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)*/
#include <stdio.h>
int main() {
    int number, maxDigit = 0, digit;
    // Accepting the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    // Finding the maximum digit
    int tempNumber = number < 0 ? -number : number; // Handling negative numbers
    while (tempNumber != 0) {
        digit = tempNumber % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        tempNumber /= 10;
    }
    // Displaying the maximum digit
    printf("Maximum digit in the number %d is %d\n", number, maxDigit);
}

