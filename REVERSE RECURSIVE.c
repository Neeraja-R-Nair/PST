//REVERSE**

#include<stdio.h>
	int sum=0,rem;
	int revnumfunc(int num)
	{
	
	if(num)
	{
		rem=num%10;
		sum=sum*10+rem;
		revnumfunc(num/10);
	}
	else
	return sum;
	
}
int main()
{
	int num =1357,revnum;
	revnum=revnumfunc(num);
	printf("the number ater reversing is:%d",revnum);
	
}

