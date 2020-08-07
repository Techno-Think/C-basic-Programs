#include<stdio.h>
int MyFun(int *arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		return arr[i];
	}
}
void main()
{
	int a[50],n,i,m;
	printf("Enter the Size of Array:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
	{
		m=MyFun(&a[i],n);
		printf("%d\n",m);
	}
}
