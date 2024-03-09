/*25.Accept the input month number and print number of days in that
month.*/

#include <stdio.h>

int main()
{
    int month;

    /* Input month number from user */
    printf("Enter month number: ");
    scanf("%d", &month);


    /* Group all 31 days conditions together using logical OR operator */
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("31 days");
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        /* Group all 30 days months together */
        printf("30 days");
    }
    else if(month==2)
    {
        printf("28 or 29 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }

    return 0;
}
