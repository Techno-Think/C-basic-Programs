#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n>5)
		goto c;
	else
	{
		printf("Number is Smaller then 5\n");
		exit();
	}
	
	c: 
		printf("Number is Greater than 5\n");
}
