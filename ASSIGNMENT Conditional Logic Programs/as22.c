/*22.Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\*/
#include <stdio.h>
int main() {
    float basicSalary, grossSalary, hra, da;

    // Input the basic salary
    printf("Enter the basic salary of the employee: Rs. ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on the basic salary
    if (basicSalary <= 10000) {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    } else {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }

    // Calculate the gross salary
    grossSalary = basicSalary + hra + da;

    // Output the gross salary
    printf("Gross salary of the employee is: Rs. %.2f\n", grossSalary);

    return 0;
}

