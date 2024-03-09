/*10.find the area of a rectangular prism formula : A=2(wl+hl+hw)*/
#include <stdio.h>
float rectangular_prism_area(float w, float l, float h);
int main() {
    float width, length, height;
    printf("Enter the width  ");
    scanf("%f", &width);
    printf("Enter the length ");
    scanf("%f", &length);
    printf("Enter the height");
    scanf("%f", &height);
    float area = rectangular_prism_area(width, length, height);
    printf("%f", area);
}

float rectangular_prism_area(float w, float l, float h) {
}

