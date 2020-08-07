#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("A=%d,B=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping\n");
	printf("A=%d B=%d",a,b);
}
