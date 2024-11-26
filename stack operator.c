#include<stdio.h>
#include<stdlib.h>

#define SIZE 4

 int top=-1,int_array[SIZE];
void push();
void pop();
void show();

int main()
{
	int choice;
	while(1)
	{
		printf("perform operations on the stack");
		printf("\n 1.push the elements \n 2.pop the element \n 3.show");
		printf("\n enter the choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:show();
			       break;
		    
		    default:
		    	printf("\n invalid choice");
		    	
		}
	}
 } 
 
 void push()
 {
 	int x;
 	if(top==SIZE-1)
 	{
 		printf("\n the stack is overflow");
 		
	 }
	 else
	 {
	 	printf("\n enter the elements to be added onto the stack");
	 	scanf("%d",&x);
	 	top=top+1;
	 	int_array[top]=x;
	 	
	 }
 	
 }
 
void pop()
{
   if(top==-1)
   {
   	printf("\n underflow");
   	
   }
   else
   {
   	printf("\n popped element %d",int_array[top]);
   	top=top-1;
   }
}

void show()
{
	int i;
	printf("the elements present in the stack");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",int_array[i]);
		
	}
}
 
 
 
 
 
 
