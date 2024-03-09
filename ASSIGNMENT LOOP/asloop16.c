/*16.Calculate the Sum of Natural Numbers Using the While Loop*/
#include <stdio.h>
int main() {
    int number, sum = 0, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
  // Check if the entered number is positive
    if (number < 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        while (i <= number) {
            sum += i;
            i++;
        }
        printf("The sum of natural numbers up to %d is: %d\n", number, sum);
    }
}


