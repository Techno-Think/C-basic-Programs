#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a,b;
	printf("\n********CHOICES********\n");
	printf("1.) Addition\n");
	printf("2.) Substraction\n");
	printf("3.) Multiplication\n");
	printf("4.) Division\n");
	printf("Enter your choice: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("Enter the value of a and b: ");
				scanf("%d%d",&a,&b);
				printf("Addition : %d",a+b);
				break;
		case 2: printf("Enter the value of a and b: ");
				scanf("%d%d",&a,&b);
				printf("Substraction : %d",a-b);
				break;
		case 3: printf("Enter the value of a and b: ");
				scanf("%d%d",&a,&b);
				printf("Multiplication : %d",a*b);
				break;
		case 4: printf("Enter the value of a and b: ");
				scanf("%d%d",&a,&b);
				printf("Division : %d",a/b);
				break;
		default: printf("Wrong Choice...plz enter correct choice\n");
	}
}
