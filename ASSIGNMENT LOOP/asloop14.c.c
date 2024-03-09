/*14.Accept 5 numbers from user and find those numbers factorials*/
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int numbers[5];

    // Accepting 5 numbers from the user
    printf("Enter five numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculating and displaying factorials of the numbers
    printf("\nFactorials of the numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Factorial of %d = %d\n", numbers[i], factorial(numbers[i]));
    }

    return 0;
}

