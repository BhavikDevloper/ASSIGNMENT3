/*18.Write a C program to calculate profit and loss on a transaction*/
 #include <stdio.h>
int main() {
    float cost_price, selling_price, profit, loss;
    // Read cost price and selling price from the user
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);
    // Calculate profit and loss
    profit = selling_price - cost_price;
    loss = cost_price - selling_price;
   // Check if there is profit or loss
    if (profit > 0) {
        printf("Profit: %.2f\n", profit);
    } else if (loss > 0) {
        printf("Loss: %.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }
}

