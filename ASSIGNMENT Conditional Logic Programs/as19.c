/*19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00*/
#include <stdio.h>
int main() {
    int customerID, units;
    char name[50];
    // Input customer details
    printf("Enter customer ID: ");
    scanf("%d", &customerID);
    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Calculate bill
    float chargePerUnit, totalAmount;

    if (units <= 350)
        chargePerUnit = 1.20;
    else if (units <= 600)
        chargePerUnit = 1.50;
    else if (units <= 800)
        chargePerUnit = 1.80;
    else
        chargePerUnit = 2.00;
    totalAmount = units * chargePerUnit;
    // Print bill
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Charge per unit: %.2f\n", chargePerUnit);
    printf("Total Amount to be Paid: %.2f\n", totalAmount);
}

