/*2. Write a program to make Simple calculator (to make addition,
subtraction,multiplication, division and modulo)*/

#include<stdio.h>
int main(){
	int a,b;
	float sum,sub,div,mod;
	printf("enter value of a and b\n");
	scanf("%f",&a);
	scanf("%f",&b);
	sum = a+b;
	sub = a-b;
	div = a/b;
	mod = a%b;
	printf("sum is : %d",sum);
	
}

