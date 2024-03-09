/*7. Accept marks from user and check pass or fail*/
#include <stdio.h>
int main() {
    float marks;
    float pass_threshold = 40.0; // Assuming passing threshold is 40
    // Accepting marks from the user
    printf("Enter the marks: ");
    scanf("%f", &marks);
    // Checking if the student has passed or failed
    if (marks >= pass_threshold) {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry! You have failed.\n");
    }
}

