#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0],min=INT_MIN;
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			min=max;
			max=arr[i];
		}
		else if(arr[i]>min)
		{
			min=arr[i];
		}
	
	}

		printf("The second largest element is:%d ",min);
}
