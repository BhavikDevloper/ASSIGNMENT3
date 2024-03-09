/*17.Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/
#include <stdio.h>

int main() {
    int number, count = 1, evenCount = 0, oddCount = 0;

    printf("Enter 5 numbers:\n");

    while (count <= 5) {
        printf("Enter number %d: ", count);
        scanf("%d", &number);

        // Checking if the number is even or odd
        if (number % 2 == 0)
            evenCount++;
        else
            oddCount++;

        count++;
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);


}


