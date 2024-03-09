/*18.Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
1. .
2. .
iii. 5 * 10 = 50*/
#include <stdio.h>
int main() {
    int N;
     printf("Enter the number to print its multiplication table: ");
    scanf("%d", &N);
    // Check if the number is positive
    if (N < 0) {
        printf("Error: Please enter a positive number.\n");
        return 1;
    }
     printf("Multiplication table of %d:\n", N);
    int i = 1;
    while (i <= 10) {
        printf("%d * %d = %d\n", N, i, N * i);
        i++;
    }
}

