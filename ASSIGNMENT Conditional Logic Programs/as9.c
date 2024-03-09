/*C 9.Program to Check Uppercase or Lowercase or Digit or Special
Character*/
#include <stdio.h>
int main() {
    char ch;
  // Accepting a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);
   // Checking if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    }
    // Checking if the character is lowercase
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    }
    // Checking if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    // If the character is neither uppercase, lowercase, nor a digit, it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }
}

