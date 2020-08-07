#include<stdio.h>
void main()
{
	int arr[50];
	int n,i,j,temp,location;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	}
	printf("Ascending Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(arr[i]<arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	}
	printf("Descending Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
