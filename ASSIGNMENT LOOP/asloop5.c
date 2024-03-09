/*5. WAP to print factorial of given number*/
#include <stdio.h>
   int main() {
    int number, i;
    unsigned long long factorial = 1; // Use unsigned long long to handle larger factorials
    // Accepting the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    // Calculating factorial
    for (i = 1; i <= number; ++i) {
        factorial *= i;
    }
    // Displaying the factorial
    printf("Factorial of %d = %llu\n", number, factorial);
}


