/*8. WAP to accept the height of a person in centimeters and categorize the
person according to their height*/
#include <stdio.h>
int main() {
    float height_cm;
	// Accepting height from the user in centimeters
    printf("Enter the height in centimeters: ");
    scanf("%f", &height_cm);
	// Categorizing the person based on height
    if (height_cm < 0) {
        printf("Invalid height entered.\n");
    } else if (height_cm < 150) {
        printf("The person is short.\n");
    } else if (height_cm >= 150 && height_cm < 170) {
        printf("The person is of average height.\n");
    } else if (height_cm >= 170 && height_cm < 190) {
        printf("The person is tall.\n");
    } else {
        printf("The person is very tall.\n");
    }
}

