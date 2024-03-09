//13.Find character value from ascii*/

#include <stdio.h>

int main() {
    int ascii_value;
    printf("Enter the ASCII value: ");
    scanf("%d", &ascii_value);
    char character = (char)ascii_value;
    printf("The character corresponding to ASCII value %d is: %c\n", ascii_value, character);
}

