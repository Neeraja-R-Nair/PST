//reverse

#include<stdio.h>
int sum=0,rem;
int main()
{
	int num,rev_num;
	printf("enter the number to reverse:");
	scanf("%d",&num);
	rev_num=rev_func(&num);
	printf("\n the reversed number is : %d",rev_num);
	return 0;
}
rev_func(int n)
{
	if(n)
	{
		rem=n%10;
		sum=sum*10+rem;
		rev_func(n/10);
		
	}
	else
	return sum;

}
