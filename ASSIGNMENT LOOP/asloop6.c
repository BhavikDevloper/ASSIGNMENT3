/*6. WAP to print Fibonacci series up to given numbers*/
#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, i;
	// Accepting the number from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);
	// Printing the Fibonacci series
    printf("Fibonacci series up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}


