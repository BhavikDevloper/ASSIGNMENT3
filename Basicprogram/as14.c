//14.Find ascii value of given character*/
#include <stdio.h>
int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    int ascii_value = (int)character;
    printf("The ASCII value of '%c' is: %d", character, ascii_value);
}

