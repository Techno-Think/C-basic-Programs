#include<stdio.h>
int main()
{
int n,i,a=0;
printf("enter ur number\n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
	if(n%i==0)
	{
	a++;
	}
}
if(a==0)
{
printf("prime\n");
}
else
{
printf("not prime\n");
}
}
