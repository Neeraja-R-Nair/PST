#include<stdio.h>
#define SIZE 100
void enqueue();
void dequeue();
void show();
int inp_arr[SIZE];
int Rear = -1;
int Front = -1;
main()
{
	int ch;
	while(1)
	{
		printf("1.enqueue operation\n");
		printf("2.dequeue operation\n");
		printf("3.display the queue\n");
		printf("4.exit\n");
		printf("enter your choice of operation :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			enqueue();
			break;
			case 2:
			dequeue();
			break;
			case 3:
			show();
			break;
	        default:
				printf("\n INVALID CHOICE");
				
		}
	}
}
void enqueue()
{
	int insert_item;
	if(Rear == SIZE -1)
    printf("overflow\n");
	else
	{
		if(Front == -1)
		Front=0;
		printf("\n elements to be inserted in queue");
		scanf("%d",&insert_item);
		Rear=Rear+1;
		inp_arr[Rear]=insert_item;
		
	}	
}
void dequeue()
{
	if(Front==-1||Front>=Rear)
	{
		printf("\nUNDERFLOW");
		return;
	}
	else
	{
		printf("\nElements to be deleted from queue: %d",inp_arr[Front]);
		Front=Front+1;
	}
}
void show()
{
	int i=0;
	if(Front==-1)
	{
		printf("\nEMPTY QUEUE");
	}
	else
	{
		printf("\nQueue: ");
		for(i=Front;i<=Rear;i++)
		{
			printf("%d",inp_arr[i]);
			printf("\n");
		}
	}
}







   
   
   
   
   
   
