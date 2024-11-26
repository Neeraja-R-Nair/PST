#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	
	a=a-b;
	a=b+a;
	a=b-a;
	printf("\n after swapping : a=%d",a);
	printf("\n after swapping :b=%d",b);
	return 0;
	
}
