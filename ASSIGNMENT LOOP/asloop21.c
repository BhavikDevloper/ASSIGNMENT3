/*21.Accept 3 numbers from user using while loop and check each numbers
palindrome*/
#include<stdio.h>
int palim(int num){
	int orgnum=num;
	int revnum=0;
    
    for(;num>0;num=num/10)
    {
    	int digit = num%10; //extract last digit
    	revnum = revnum*10+digit;    //adding last digit
	}
	return(revnum==orgnum);
	
}
int main(){
	int number;
	printf("enter number");
	scanf("%d",&number);
   
   if(palim(number)){
   	printf("%d is palim",number);
   }
   else{
   	printf("%d is not palim",number);
   }
}
