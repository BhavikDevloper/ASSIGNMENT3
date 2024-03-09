/*3. WAP to take 10 no. Input from user find out below values*/
#include <stdio.h>

int main() {
    int numbers[10];
    int i, evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;

    // Accepting 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculating even and odd counts and their sums
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            sumEven += numbers[i];
        } else {
            oddCount++;
            sumOdd += numbers[i];
        }
    }

    // Displaying results
    printf("\nNumber of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);
}



