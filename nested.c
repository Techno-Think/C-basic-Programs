#include<stdio.h>
int main()
{
int a,b,c;//a=10,b=60,c=700
printf("enter three number\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)//10>60
{
	if(a>c)//100>700
	{
	printf("a is greater:\n");
	}
	else
	{
	printf("c is greater:\n");
	}
}	
else
{
	if(b>c)//60>700
	{
	printf("b is greater:\n");
	}
	else
	{
	printf("c is greater:\n");
	}
}
}


