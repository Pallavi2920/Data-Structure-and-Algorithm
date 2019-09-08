/*Queue Using stack*/
#include<stdio.h>
#define N 10
int s1[N],s2[N],t1=-1,t2=-1;
void enqueue()
{
	int n;
	printf("Enter the data");
	scanf("%d",&n);
	if(t1>=N-1)
	{
		printf("Queue Overflow");
	}
	else
	{
		t1++;
		s1[t1]=n;
	}
}
void dequeue()
{
    if(t1==-1 && t2==-1)
	{
		printf("Queue empty ");
	}
	else
	{
		while(t1!=-1)
		{
			t2++;
			s2[t2]=s1[t1];
			t1--;
		}
		printf("The deleted item is:%d",s2[t2]);
		t2--;
		printf("The elements in the list are:");
		int i=t2;
		while(i!=-1)
		{
			printf("%d->",s2[i]);
			i--;
		}
		while(t2!=-1)
		{
			t1++;
			s1[t1]=s2[t2];
			t2--;
		}
		
	}
	    
	
}
int main()
{
	int c;
	do
	{
		printf("Enter your choice:\n1.Enqueue\n2.Dequeue:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:enqueue();
			       break;
			case 2:dequeue();
			       break;
			default:printf("Invalid Input");
		}
		printf("Do you want to continue?(1/0)");
		scanf("%d",&c);
    }
	while(c==1);
}

