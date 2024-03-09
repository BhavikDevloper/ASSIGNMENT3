/*20.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/*/

#include <stdio.h>

int main() {
    float billAmount, totalBill;

    // Input the bill amount
    printf("Enter the bill amount: Rs. ");
    scanf("%f", &billAmount);

    // If bill exceeds Rs. 800, add a surcharge of 18%
    if (billAmount > 800) {
        totalBill = billAmount + (billAmount * 0.18);
    } else {
        totalBill = billAmount;
    }

    // Ensure the minimum bill amount is Rs. 256
    if (totalBill < 256) {
        totalBill = 256;
    }

    // Output the total bill amount
    printf("Total bill amount: Rs. %.2f\n", totalBill);

    return 0;
}

