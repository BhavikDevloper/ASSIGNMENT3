/*8. Find circumference of Rectangle formula : C = 4 * a */
#include <stdio.h>
int main() {
    float length, width, perimeter;
    printf("Enter the length");
    scanf("%f", &length);
    printf("Enter the width");
    scanf("%f", &width);
    perimeter = 2 * (length + width);
    printf("%f", perimeter);
}


