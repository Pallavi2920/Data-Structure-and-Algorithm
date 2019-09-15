#include<stdio.h>
#define N 10
int arr[N],top1=-1,top2=N;
void push1()
{
    int n,i;
	printf("Enter the Number of elements you want to insert: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(top1+1==top2 || top1==N-1 || top2==0)
		{
			printf("Stack Overflow");
		}
		else 
		{
			top1++;
			arr[top1]=a[i];
		}
	}
}
void push2()
{
    int n,i;
	printf("Enter the Number of elements you want to insert: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(top1+1==top2 || top1==N-1 || top2==0)
		{
			printf("Stack Overflow");
		}
		else 
		{
			top2--;
			arr[top2]=a[i];
		}
	}
}
void pop1()
{
	if(top1==-1)
	{
		printf("Stack Empty");
	}
	else
	{
		printf("The deleted item is %d",arr[top1]);
		top1--;
	}
}

void pop2()
{
	if(top2==N)
	{
		printf("Stack Empty");
	}
	else if(top2=N-1)
	{
	   printf("The deleted item is %d",arr[top2]);
	   top2++;
	}
	else
	{
		printf("The deleted item is %d ",arr[top2]);
		top2++;
	}
	
}
void display1()
{
	int i=top1;
	printf("\nThe item in the list are:\n");
	while(i!=-1)
	{
		printf("%d->",arr[i]);
		i--;
	}
}
void display2()
{
	int i=top2;
	printf("\nThe item in the list are:\n");
	while(i!=N)
	{
		printf("%d->",arr[i]);
		i++;
	}
}
int main()
{
   int c;
   do
   {
   	printf("Enter your choice\n1.Push1\n2.Push2\n3.Pop1\n4.Pop2\n5.Display1\n6.Display2:");
   	scanf("%d",&c);
   	switch (c)
   	{
   		case 1:push1();
   		       break;
   		case 2:push2();
   		       break;
   		case 3:pop1();
   		       break;
   		case 4:pop2();
   		       break;
   		case 5:display1();
   		       break;
   		case 6:display2();
   		       break;
   		default:printf("invalid Input");
	   }
	   printf("\nDo you want to continue?(1/0) ");
	   scanf("%d",&c);
   }while(c==1);
	
}
