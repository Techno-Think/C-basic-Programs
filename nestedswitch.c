#include<stdio.h>
#include<conio.h>
void main()
{
	int n,h;
	int a,b,c;
	printf("Enter your choice\n");
	printf("1.)Calcuation\n");
	printf("2.)Comparison\n");	
	scanf("%d",&n);
	switch(n)
	{
		case 1:	
					printf("Enter your choice\n");
					printf("1.)Addition\n");
					printf("2.)Subtraction\n");
					printf("3.)Multiplication\n");
					printf("4.)Division\n");
					fflush(stdin);
					scanf("%d",&h);
					switch(h)
					{
						case 1: printf("Enter two numbers:");
									 scanf("%d%d",&a,&b); 
									c=a+b;
									 printf("Sum: %d",c);
						break;
						case 2: printf("Enter two numbers:");
									 scanf("%d%d",&a,&b);
									 c=a-b;
						          printf("Sub: %d",c);
						break;
						case 3: printf("Enter two numbers:");
									 scanf("%d%d",&a,&b);
									 c=a*b;
									 printf("Product: %d",c);
						break;
						case 4: printf("Enter two numbers:");
								  	 scanf("%d%d",&a,&b); 
									 c=a/b;
									 printf("Division: %d",c);
						break;
						default: printf("Wrong Choice\n");
					}
		break;
		case 2:  printf("Enter your choice\n");
					printf("1.)Comparison b/w two number\n");
					printf("2.)Comparison b/w three number\n");
					fflush(stdin);
					scanf("%d",&h);
					switch(h)
					{
						case 1: 
									 printf("Enter the value of A");
									 scanf("%d",&a);
									 printf("Enter the value of B");
									 scanf("%d",&b);
									 if(a>b)
									 {
									 	printf("A is greater");
									 }
									 else
									 {
									 	printf("B is greater");
									 }
						break;
						case 2: 
									 printf("Enter the value of A");
									 scanf("%d",&a);
									 printf("Enter the value of B");
									 scanf("%d",&b);
									 printf("Enter the value of C");
									 scanf("%d",&c);
									 if(a>b&&a>c)
									 {
									 	printf("A is greater\n");
									 }
									 else if(b>a&&b>c)
									 {
									 	printf("B is greater\n");
									 }
									 else
									 {
									 	printf("C is greater\n");
									 }
						break;
					}
		break;		 
	}
//getch();
}
