//fibonacci series using recurtion

#include<stdio.h>
void printfibonacci(int m) //calling function
{
	static int m1=0;m2=1,m3;
	if(m>0)
	{
		m3=m1+m2;
		m1=m2;
		m2=m3;
		printf("%d \t",m3);
		printfibonacci(m-1);
	}
}
int main()
{
	int m;
	printf("enter your prefered number of elements here: ");
	scanf("%d",&m);
	printf("the fibonacci series will be:");
	printf("%d\t\t %d\t",0,1);
	printfibonacci(m-2);
	return 0;
	
}
