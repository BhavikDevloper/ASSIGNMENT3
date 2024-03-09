/*15.Calculate sum of 10 numbers using of while loop*/
#include <stdio.h>
int main() {
    int sum = 0;
    int i = 1;
    int number;
    printf("Enter 10 numbers:\n");
    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        sum += number; i++;
    }
    printf("The sum of the 10 numbers is: %d\n", sum);
}


