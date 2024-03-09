/*7.WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746*/
#include <stdio.h>
int main() {
    int number, reverse = 0, remainder;
    // Accepting the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    // Reversing the number
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    // Displaying the reversed number
    printf("Reversed number: %d\n", reverse);
}


