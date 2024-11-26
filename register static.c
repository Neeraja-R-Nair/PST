#include<stdio.h>
int revnumfunc(int num)
{
	static int sum=0,rem;
	if(num)
	{
		rem=num%10;
		sum=sum*10+rem;
		revnumfunc(num/10);
	
	}
	else
	return sum;
	
}
int main(){
	register int num=1357,revnum;
	revnum=revnumfunc(num);
	printf("the number after reversing is : %d",revnum);
	
}
