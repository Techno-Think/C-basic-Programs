#include<stdio.h>
#include<conio.h>
int main()
{
	//clrscr();
	int a,b,c,n;
	printf("Enter Your Choice\n");
	printf("1.)Addition\n");
	printf("2.)Substraction\n");
	printf("3.)Multiplication\n");
	printf("4.)Division\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("Enter the values of a and b:");
				scanf("%d%d",&a,&b);
				c=a+b;
				printf("Sum: %d\n",c);
				break;
		case 2: printf("Enter the values of a and b:");
				scanf("%d%d",&a,&b);
				c=a-b;
				printf("Sub: %d\n",c);
				break;
		case 3: printf("Enter the values of a and b:");
				scanf("%d%d",&a,&b);
				c=a*b;
				printf("Product: %d\n",c);
				break;
		case 4: printf("Enter the values of a and b:");
				scanf("%d%d",&a,&b);
				c=a/b;
				printf("Division: %d\n",c);
				break;
		default: printf("Wrong Choice\n");
	}
//getch();
}	
