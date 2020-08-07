#include<stdio.h>
void main()
{
	int arr[50];
	int n,i,element,location;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted:");
	scanf("%d",&element);
	printf("Enter the element location:");
	scanf("%d",&location);
	
	for(i=n;i>=location-1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[location-1]=element;
	
	printf("Resultant Array");
	for(i=0;i<n+1;i++)
	{
		printf("%d",arr[i]);
	}
}
