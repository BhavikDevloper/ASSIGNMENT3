/*21.Write a program in C to read any Month Number in integer and display the
number of days for this month.*/
#include <stdio.h>
int main(){
	int number;
	printf("Enter the month number : ");
	scanf("%d",&number);
	switch (number)
	{
    case 1:
	case 3:
	case 5:
	case 7:
	case 8:	
	case 10:
	case 12:
		printf("month have 31 days.");
		break;
    case 2:
	   printf("month have 28 days.");
	   break;
	case 4:
	case 6:
	case 9:
	case 11:
	   printf("month have 30 days.");
	   break;
	 default:
	   printf("Enter a valid month number.");
	   break;
  }
}
