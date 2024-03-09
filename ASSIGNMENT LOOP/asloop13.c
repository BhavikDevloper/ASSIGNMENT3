/*13.calculate the Factorial of a Given Number using while loop*/
#include<stdio.h>
int main() {
    int number;
    long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    // Error handling for negative numbers
    if (number < 0) {
        printf("Error: Factorial of negative numbers is undefined.\n");
    } 
    else {
        int i = 1;
        while (i <= number) {
            factorial *= i; ++i;
        }
        printf("Factorial of %d = %lld\n", number, factorial);
    }
}


