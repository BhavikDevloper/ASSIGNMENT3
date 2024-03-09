/*1.Write a C program to accept two integers and check whether they are equal
or not*/
#include <stdio.h>
int main() {
    int num1, num2;
   // Accepting two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);
     printf("Enter second integer: ");
    scanf("%d", &num2);
   // Checking if the two integers are equal
    if (num1 == num2) {
        printf("The two integers are equal.\n");
    } else {
        printf("The two integers are not equal.\n");
    }
}

