//factorial using recurtion

#include<stdio.h>
long int factorial (int n); //function declaration
int main ()
{
	int n;
	printf("enter a positive integer : ");
	scanf("%d",&n);
	printf("factorial of %d = %ld",n,factorial(n)); //calling function 
	return 0;
	
}
long int factorial (int n){ //function definition 
	if (n>=1)
	return n*factorial(n-1); //recursive function 
	else
	return 1;
}
