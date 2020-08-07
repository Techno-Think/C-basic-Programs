#include<stdio.h>
#include<conio.h>
int Strong(int n)
{
	long i,rem,fact,temp,sum=0;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		fact=1;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
		return sum;	
}
void main()
{
	long n,s;
	printf("Enter a number:");
	scanf("%ld",&n);
	s=Strong(n);
	if(s==n)
	{
		printf("Strong Number\n");
	}
	else
	{
		printf("Not Strong Number");
	}
}
