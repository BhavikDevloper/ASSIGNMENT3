/*12.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/
#include <stdio.h>
int main() {
    int num_students;
    int total_apples;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    total_apples = 5 * num_students;
    printf("Total apples required: %d\n", total_apples);
}

