//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)*/
#include<stdio.h>
int main(){
	int num;
	
	//Accepting an integer from the user 
	printf("Enter an integer:");
	scanf("%d",num);
	
	//Calculating and printing the first powers 
	printf("First three powers of%d:\n",num);
	printf("%d^1=%d\n",num,num);
	printf("%d^2=%d\n",num,num*num);
	printf("%d^3=%d\n",num,num*num);
} 
