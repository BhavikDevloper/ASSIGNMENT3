/*14.WAP to find the largest of three numbers.*/
#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Accepting three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assuming the first number is the largest initially
    largest = num1;

    // Comparing with the second number
    if (num2 > largest) {
        largest = num2;
    }

    // Comparing with the third number
    if (num3 > largest) {
        largest = num3;
    }

    // Printing the largest number
    printf("The largest number among %d, %d, and %d is: %d\n", num1, num2, num3, largest);

    return 0;
}

