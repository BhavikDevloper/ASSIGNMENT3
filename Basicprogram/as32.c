//32.Accept 2 numbers and find out its sum check it size*/
#include<stdio.h>
int main(){
	int num1,num2,sum;
	// Accepting two numbers
	printf("Enter first number");
     scanf("%d",&num1);
      printf("Enter the second number");
      scanf("%d",&num2);
      
      //Finding sum without using + operator
      sum = num1-(~num2)-1;
      
      //checking the size of the sum int size=size of (sum);
      printf("Size of the sum:%d bytes\n");
  }
