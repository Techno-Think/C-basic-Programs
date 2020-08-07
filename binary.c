#include <stdio.h>
#include<conio.h>
int Binary(int n)
{
	long rem,t=1,b=0;
	while(n!=0)
	{
		rem=n%2;
		n=n/2;
		b=b + rem*t;
		t=t*10;	   
	}
	return b;
}
void main()
{
	long n,binary;
	printf("Enter a decimal number:");
	scanf("%ld",&n);
	binary=Binary(n);
	printf("Binary Conversion is: %d",binary);
}
