/*4. WAP to print table up to given numbers*/
#include <stdio.h>
int main() {
    int number, i, j;

    // Accepting the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Printing the multiplication table up to the given number
    for (i = 1; i <= number; i++) {
        printf("Multiplication table for %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}

