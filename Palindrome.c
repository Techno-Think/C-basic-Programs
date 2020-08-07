#include<stdio.h>
#include<conio.h>
int main()
{
	//clrscr();
	int n,temp,o,p=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		o=temp%10;
		p=p*10+o;
		temp=temp/10;
	}
	printf("Reversed Number: %d\n",p);
	if(n==p)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not Palindrome\n");
	}
}
