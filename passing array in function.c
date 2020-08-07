#include<stdio.h>
#include<conio.h>
int Sum(int arr[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
void main()
{
	int arr[5]={10,20,30,40,50};
	int s,i;
	printf("Array elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	s=Sum(arr);
	printf("Sum of the elements of array: %d",s);
}
