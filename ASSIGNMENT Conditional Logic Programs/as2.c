/*2.Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/
#include <stdio.h>

int main() {
    int a, b;

    // Accepting the value of m from the user
    printf("Enter the value of a: ");
    scanf("%d", &a);

    // Checking the value of m and assigning the value of n accordingly
    if (a > 0) {
        b = 1;
    } else if (a == 0) {
        b = 0;
    } else {
        b = -1;
    }

    // Displaying the value of n
    printf("The value of n is: %d\n", b);

}


