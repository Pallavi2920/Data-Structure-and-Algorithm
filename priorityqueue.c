#include<stdlib.h>
struct node
{
	int n,p;
	struct node *link;
};
typedef struct node node;
node *front=NULL,*t,*t1;
void enqueue()
{
	/*int i,x;
	printf("Enter the number of values you want to insert:");
	scanf("%d",&x);
	for(i=0;i<=x;i++)
	{*/
	t=(node*)malloc(sizeof (node));
	printf("Enter the number and priority of number:");
	scanf("%d %d",&t->n,&t->p);
	t->link=NULL;
	t1=front;
	if(front==NULL || (t->p)<(t1->p))
	{
		t->link=front;
		front=t;
	}
	else
	{
	
		while(t1->link!=NULL && t1->link->p<=t->p)
		{
			t1=t1->link;
		}
		t->link=t1->link;
		t1->link=t;
	}
}


void dequeue()
{
	t1=front;
    printf("The deleted item is:(%d,%d )",t1->n,t1->p);
    front=front->link;
    free(t1);
}
void display()
{
t1=front;
	while(t1!=NULL)
	{
	   printf("%d,%d->",t1->n,t1->p);
		t1=t1->link;
	}
}
int main()
{
	int c;
	do
	{
		printf("Enter your choice\n1.Enqueue\n2.Dequeue\n3.Display:");
		scanf("%d",&c);
		switch(c)
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
		scanf("%d",&c);
	}while(c==1);
}
