/*Circular Queue using array*/
#include<stdio.h>
#define N 5
int q[N],front=-1,rear=-1;
void enqueue()
{
	int n;
	printf("\nEnter the number");
	scanf("%d",&n);
	if(rear==front-1 || (front==0 && rear==N-1))
	{
		printf("Queue Overflow");
	}
	else if (front!=0 && rear==N-1 )
	{
		rear=0;
		q[rear]=n;
	}
	else if(rear==-1)
	{
		front++;
		rear++;
		q[rear]=n;
	}
	else
	{
		rear++;
	    q[rear]=n;	
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue Empty");
	}
	else if(front==rear)
	{
		printf("The deleted item is: %d",q[front]);
		front=rear=-1;
	}
	else if(rear<front)
	{
		if(front==N-1)
		{

			front=0;
		}
		else
		{
			printf("The deleted item is: %d",q[front]);
			front++;
		}
		
	}
	else
	{
		printf("The deleted item is: %d",q[front]);
		front++;
	}
	
}
void display()
{
	int i=front;
	if(front<rear)
	{
	
	   for(i=front;i<=rear;i++)
	   {
		printf("%d->",q[i]);
       }
    }
    else
    {
    		for(i=0;i<=rear;i++)
	{
		printf("%d->",q[i]);
	}
    	for(i=front;i<=N-1;i++)
    	printf("%d->",q[i]);
    
}
	
}
int main()
{
	int n;
	do
	{
		printf("Enter your choice\n1.Enqueue\n2.Dequeue\n3.Display:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:enqueue();
			       break;
			case 2:dequeue();
			       break;
			case 3:display();
			       break;
			default:printf("Invalid Input");
			
		}
		printf("Do you want to continue?(1/0)");
		scanf("%d",&n);
	}while(n==1);
}














