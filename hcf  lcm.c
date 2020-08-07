#include<stdio.h>
#include<conio.h>
int hcf(int a,int b)
{
	int i,c;
	for(i = 1;i <= a || i <= b;i++)
	{
		if(a%i==0 && b%i==0)
			c=i;		
		}
	return (c);

}
int lcm(int a, int b, int h)
{
	int m;
	m=(a*b)/h;
	return m;
}
void main()
{
	int a,b,h,l;
	{
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		h=hcf(a,b);
		printf("HCF=%d\n",h);
		l=lcm(a,b,h);
		printf("LCM=%d\n",l);
	}
}
